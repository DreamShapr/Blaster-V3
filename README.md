# Blaster-V3
Files and tutorial for 3d printed blaster with full electronics, inspired by the SIMPLE BLASTER OS project by Chris Carpenter.

Project Description
The blaster V3 is a fonctionnal prop for star wars fans. It include working trigger, four sound (startup, fire, empty, reload)and light.

Project Requirements
This project requires little to none IT skills, for i will try to walk you through the build, but it will require some hardware :

(every link is indicative, you don't have to use the exact same ones, as long as the dimensions are the sames)

- Soldering iron
- electronical wires (arduino Dupont ones would do fine, but personnally i like mines a little larger)
- Arduino nano (official or [not](https://www.amazon.fr/s?k=arduino+nano+elegoo&__mk_fr_FR=%C3%85M%C3%85%C5%BD%C3%95%C3%91&crid=21AOODUQ6L2EV&sprefix=arduino+nano+elegoo%2Caps%2C70&ref=nb_sb_noss_1))
- [Mp3 DFPlayer](https://www.amazon.fr/AZDelivery-DFPlayer-Arduino-compris-eBook/dp/B07Z5D1TX8/ref=sr_1_3_sspa?keywords=dfplayer+mini+mp3+arduino&qid=1680517477&sprefix=dfp%2Caps%2C74&sr=8-3-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&psc=1) for aduino 
- Micro sd card (more than 2Gb)
- [Speaker](https://fr.aliexpress.com/item/32921436094.html?isdl=y&aff_fsk=_9znYgV&src=Connexity&aff_platform=aff_feeds&aff_short_key=_9znYgV&pdp_npi=2%40dis%21EUR%211.87%211.64%21%21%21%21%21%40%2166133252193%21afff&dp=16805211846515582166112021000008005&cn=318473&cv=a5930b23d6663d1663e90cd684112080)
- [PushButton](https://www.amazon.fr/Ytian-Bouton-Momentan%C3%A9s-Poussoir-Interrupteur/dp/B07C845S2Q/ref=sr_1_22?__mk_fr_FR=%C3%85M%C3%85%C5%BD%C3%95%C3%91&crid=32O9IRXOQR8O5&keywords=bouton+poussoir+2a+2+broches&qid=1680521309&sprefix=bouton+poussir+2a+2broche%2Caps%2C75&sr=8-22)
- [limit Switch](https://www.amazon.fr/UKCOCO-interrupteur-commutateur-bouton-poussoir-momentan%C3%A9/dp/B07MDJZJG5/ref=sr_1_6?keywords=bouton+fin+de+course&qid=1680521338&sprefix=boton+fin+de+co%2Caps%2C73&sr=8-6)
- [Switch](https://www.amazon.fr/Youmile-interrupteurs-glissi%C3%A8re-verticaux-interrupteur/dp/B08SM2HHNR/ref=sr_1_12?__mk_fr_FR=%C3%85M%C3%85%C5%BD%C3%95%C3%91&crid=HISOVMCE42Q9&keywords=interrupteur%2Barduino&qid=1680521400&sprefix=inerrupteur%2Barduino%2Caps%2C72&sr=8-12&th=1)
- [Laser](https://www.amazon.fr/RUNCCI-YUN-Photor%C3%A9sistance-R%C3%A9sistance-D%C3%A9pendant-Lumi%C3%A8re/dp/B08N1F5YBG/ref=sr_1_2_sspa?adgrpid=1353499750845157&hvadid=84594162209376&hvbmt=be&hvdev=c&hvlocphy=126407&hvnetw=o&hvqmt=e&hvtargid=kwd-84594261404324%3Aloc-66&hydadcr=27708_2269046&keywords=arduino+laser&qid=1680522013&sr=8-2-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&psc=1) or led.
- [3V7 battery](https://fr.aliexpress.com/item/1005002103573966.html?spm=a2g0o.productlist.main.1.2878Y3HlY3HlwL&algo_pvid=c6a24adb-264b-4a89-9a11-c64aae41eedb&algo_exp_id=c6a24adb-264b-4a89-9a11-c64aae41eedb-0&pdp_npi=3%40dis%21EUR%213.2%210.99%21%21%21%21%21%402145280e16810720125923848d06eb%2112000018750964947%21sea%21FR%210&curPageLogUid=wxnUIWOozNJB) (used in rechargeable power banks). 
- 2 bolts (CHC M4x2)
(- 2 springs (I used pen ones)) Optionnal. The limit switch sould have enough pressure to push back the trigger.

# Tutorial

## Wiring diagram : 
You can change most of the pins, except for the Vin, 5V and GND.
If you decide to use a led in place of the laser (for safety reasons, for example), you can wire it the same way, but don't forget to add a resistor.

![image](https://user-images.githubusercontent.com/129743177/230795519-05659bd0-0d65-4b94-8a36-82924a9dea29.png)

## Sd card configuration
Copy the content of the folder "mp3" on the root of the card. It contains the sound files names in the format (000X.mp3).

## Arduino programming
You can find the code in the Src folder. After the wiring, if you are not certain that your components works fine, you can test them one by one with arduino tutorials before uploading the file BlasterV3.ino.

## 3d printing the blaster
You can find the files [here](https://cults3d.com/en/users/DreamShapr/creations), under the name WESTAR 35 MANDALORIAN BLASTER WITH ELECTRONICS - V3.


## Assembly
![image](![image](https://user-images.githubusercontent.com/129743177/230795528-28c2b770-3788-45d2-9fb3-8fbe885c2626.png)

The barel is designed to host the speaker, so it is better you use the same dimensions as the one i used. The sound board can also be placed inside, so the whole sound system is in one place and you don't need too much cable length. The laser or most diodes should fit in the emmiter hole in the barrel, and none of these components should require a fixation system.

The limit switch must be glued into the handle part, but assure yourself that the trigger realy come in contact with the switch when pulled before gluing.

The arduino should be held in place by the cables.

The side display probably will require a little glue or tape.

![image](https://user-images.githubusercontent.com/129743177/230795542-c8054f04-b953-4a9d-9b5c-bc2568b0c857.png)
The reload switch will be held in place with the nut on the outside part, and the on/off switch must be forced into the hole to ensure it don't move.

# Power source
![image](https://user-images.githubusercontent.com/129743177/230795562-4fb78c60-63b9-42f9-b6c2-520d6659e406.png)
For the power source, just strip open the power bank, and connect the red (or +) to Vin switch arduino, and the black (or -) to Gnd. I suggest keeping the whole socket part to easily recharge the battery the a micro-usb cable.

