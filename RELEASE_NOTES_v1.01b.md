# Lords of Magic Special Edition Decompilation 1.01b

v1.01b is a bug-fix release on top of v1.01a. It is a rebuilt standalone exe that can run natively on Windows 11.

You need a legitimate copy of Lords of Magic Special Edition. This release is not the original game; it is a replacement exe to use with your own install.

## What this version fixes over 1.01a

- **Missing fortress gate sprite (`00411ba0`).** During a live siege, the fortress gate was present (it had hit points and a map position) but was not drawn, so the gate looked like it was missing. The rebuilt code stored a converted integer where the original game stores raw floating-point bits used as coordinates. The gate sprite now draws as it does in the original game.

- **Low-memory warning text (`00505d80`).** The low-memory warning printed "(null)" in place of the expected wording, for example "WARNING! Your system has only 86 (null)". A placeholder 0 was passed instead of the string id. The dialog now shows the original wording.

- **Ambient sound arguments (`0047aa20`).** The rebuilt ambient-sound script command dropped the first argument and converted a raw integer as if it were a float. Both arguments are now handled the way the original game does.

- **Debug grid colour (`00504ce0`).** The debug grid was drawn with a placeholder colour of 0. The original values are restored: 100 for the centre cell and 0xff otherwise. This only affects debug drawing.

- **Sound-buffer size counter (`00478f60`).** A sound-memory counter subtracted the DirectSound caps `dwSize` field instead of `dwBufferBytes`. The counter is not used for gameplay, so this had no visible effect, but it now matches the original game.

## Testing notes

All 102 functions captured in a live soak were replayed against the original game (52 matched in full, 50 stopped early without a mismatch). Those 50 were then checked by hand against the original disassembly: 47 were identical, and 2 were harmless differences (an optional RGB565 display mode in `004750b0`, and a different add order in a dot product in `00519b30`). Gate and wall damage during a siege was not exercised in testing; the gate stayed at full hit points in both the rebuild and the original game in those runs.

Windows 11 sound and color support from 1.0 is unchanged: menu clicks and the announcer play natively, and colors come out right without XP compatibility mode. The 1.01a number-formatting fix is also unchanged.

## How to play

Download `Lords_of_Magic_SE_Decompile_v1.01b_Ready_to_Play.zip`, unzip it, and follow the instructions in `Ready to Play/HOW TO PLAY.txt`. Copy `lomse_sa.exe` and `lomse_sa.exe.manifest` into the English folder of your Lords of Magic Special Edition install, next to the original `lomse.exe`. Leave the original `lomse.exe` in place. Turn off XP compatibility mode on `lomse_sa.exe`, then double-click `lomse_sa.exe`.

SHA256 of Ready to Play/lomse_sa.exe:
662e5a7e4299d60a1a89b19a17f6885bd82971c09f2e419a3244bd9f475ef454
