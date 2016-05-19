
object Keyboard {
    private val PROMPT = ">> "
    fun read(possibleCommands: Array<out CommandEnum>): CommandEnum {
        possibleCommands.forEachIndexed { i, cmd ->
            println("[${i + 1}] ${cmd.command.label}");
        }
        val selectedIndex = readInt(IntRange(1, possibleCommands.size))
        println()
        return possibleCommands[selectedIndex - 1]
    }

    private fun readInt(range: IntRange): Int {
        var selectedIndex: Int?
        do {
            print(PROMPT)
            selectedIndex = tryReadInt(range)
        } while (selectedIndex == null)
        return selectedIndex
    }

    private fun tryReadInt(range: IntRange): Int? {
        val input = readLine() ?: return null
        try {
            val int = input.toInt()
            return if (int >= range.start && int <= range.endInclusive) int else null
        } catch (e: NumberFormatException) {
            return null
        }
    }
}
