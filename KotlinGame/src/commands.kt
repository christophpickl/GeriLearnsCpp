
enum class MenuCommand(override val command: Command): CommandEnum {
    NEXT_TURN(CommandImpl("Next Turn")) {
        override fun execute(game: Game) {
            game.nextTurn()
        }
    },
    INFO(CommandImpl("Info")) {
        override fun execute(game: Game) {
            game.printInfo()
        }
    },
    BUY(CommandImpl("Buy")) {
        override fun execute(game: Game) {
            game.buy()
        }
    },
    QUIT(CommandImpl("Quit")) {
        override fun execute(game: Game) {
            // will be handled in game loop
        }
    };
}

enum class BuyCommand(override val command: Command): CommandEnum {
    FACTORY(CommandImpl(Factory.PRIZY_LABEL)) {
        override fun execute(game: Game) {
            game.buyItem(Factory())
        }
    },
    CANCEL(CommandImpl("Cancel")) {
        override fun execute(game: Game) {
            // do nothing
        }
    };
}

interface CommandEnum {
    val command: Command
    fun execute(game: Game)
}

class CommandImpl(override val label: String) : Command

interface Command {
    val label: String
}
