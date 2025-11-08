# Meshtastic-Thing
Weird Meshtastic prototype I build.
For everyone wanting to replicate this (for reasons beyond me), here is some information.
Keep in mind that this instruction requires some skill level. If you have questions, open an issue!

Steps:
1. Get a Board like the one shown in the AliExpress listing (could also be black, doesn't matter. Open an issue if you're unsure)
2. Get an RFM95 module
3. Solder everything up according to the pictures (pin definition in [variant.h](variant.h))
4. Clone the meshtastic firmware repo (recursively)
5. Open the repo firm VSCode with PlatformIO
6. Change out the file `variants/nrf52840/diy/nrf52_promicro_diy_xtal/variant.h` to the one in this repo
7. Build and flash the PlatformIO configuration `nrf52_promicro_diy_xtal`
8. Check out [BLEnky](https://structure.nullco.de/?node_id=6622041d1a95fb4425f2323a&token=3c55f7bb1de0e79c9020dbb09deac741df56fc5474825407abb94f96714ce134) (unrelated, just wanted to advertise)
9. ???
10. Profit

<img width="1036" height="409" alt="image" src="https://github.com/user-attachments/assets/e6cbf231-c312-4eb1-a8f1-70f1040e9303" />

<img width="881" height="1174" alt="image" src="https://github.com/user-attachments/assets/e97a07bf-51e0-4ec7-8bf5-21192e71d03e" />

<img width="814" height="1174" alt="image" src="https://github.com/user-attachments/assets/7be0b426-5365-4951-b992-c578711793b5" />

<img width="998" height="1174" alt="image" src="https://github.com/user-attachments/assets/77605119-b233-40d2-96a1-bcf1094a5967" />

<img width="818" height="1174" alt="image" src="https://github.com/user-attachments/assets/a59bb673-57a9-4815-baa3-8a8d6bbb8dd3" />




