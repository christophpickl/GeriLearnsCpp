
class Factory() : Buyable {
    companion object {
        val PRIZE = 100
        val LABEL = "Factory"
        val PRIZY_LABEL = "${Factory.LABEL} (${Factory.PRIZE}$)"
        val MONEY_PER_TURN = 10
    }
    override val prize: Int get() = PRIZE
    override val label: String get() = LABEL

    override fun buyFor(player: Player) {
        player.money -= prize
        player.factories++
    }
}

interface Buyable {
    val prize: Int
    val label: String
    fun buyFor(player: Player)
}

class Player {
    companion object {
        private val INITIAL_MONEY = 210
    }
    var money: Int = INITIAL_MONEY
    var factories: Int = 0

    fun canBuy(item: Buyable) = money >= item.prize

    fun buy(item: Buyable) {
        assert(canBuy(item))
        item.buyFor(this)
    }

    fun earnMoney() {
        money += factories * Factory.MONEY_PER_TURN
    }
}

class Game() {
    private val player = Player()
    private var turn: Int = 1

    fun start() {
        printInfo()
        var cmd: CommandEnum
        do {
            cmd = Keyboard.read(MenuCommand.values())
            cmd.execute(this)
        } while (cmd != MenuCommand.QUIT)
    }

    fun nextTurn() {
        turn++
        player.earnMoney()

        printInfo()
    }

    fun printInfo() {
        println("Game info:")
        println("  - Turn: $turn")
        println("  - Money: ${player.money}$")
        println("  - Factories: ${player.factories}")
        println()
    }

    fun buy() {
        Keyboard.read(BuyCommand.values()).execute(this)
    }

    fun buyItem(item: Buyable) {
        if (!player.canBuy(item)) {
            println("Not enough money!")
            println()
            return
        }
        player.buy(item)
        println("Bought a new ${item.label}.")
        println()
    }
}

fun main(args: Array<String>) {
    println("Willkommen beim super Geri Spiel :)")
    println()

    val game = Game()
    game.start()

    println("Bye bye.")
}