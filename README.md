# pokeemerald: Outfits System

## What is this?

This is a feature branch that implements _Outfits System_ into Pokémon Emerald, which also adds:
*  SDH's [commit](<https://github.com/ShinyDragonHunter/pokeemerald/commit/05f8f2688b22454e9d2400db1621375f1e4ccb3c>) for simplifying the player states system and thus making this system easier to implement. (Required)
* An item called _`OUTFIT BOX`_ for storing and changing the player's current outfit.
* A menu for changing outfits that is called in the OUTFIT BOX item. (Can also be configured to be called somewhere else if wanted)
* Several scripting macros for unlocking an outfit, checking the state of an outfit and buffers an outfit's name/description.

This is _not_ a faithful port of Gen 6's Outfits System. So, if you want it to behave similarly to Gen 6's system, you're likely gonna have to go on your own there. However, questions regarding the Outfits System is welcomed.

Note that this feature branch is still missing some of the features that's necessary, such as the ability to purchase outfits. So, stay tune for more until then!
If you use pokeemerald-expansion in your hack, please add RHH (Rom Hacking Hideout) to your credits list. Optionally, you can list the version used, so it can help players know what features to expect.
You can phrase it as the following:
```
Based off RHH's pokeemerald-expansion 1.9.3 https://github.com/rh-hideout/pokeemerald-expansion/
```

## Known Bugs

<!-- TODO: Too busy to fix, so I'll put it here -->
### - Trainer Card shows Player's trainer pic for Link (Cable) Players

## Credits

- Slawter666, for their original costumes system that inspires me for doing this. 
- SDH for his commit that simplify the player states system and thus helps makes the process of creating this much easier.
- RavePossum for helping me with my silly mistakes that causes bugs and bringing ideas.
### [Documentation on features can be found here](https://github.com/rh-hideout/pokeemerald-expansion/wiki)

## If I already have a project based on regular pokeemerald, can I use pokeemerald-expansion?
Yes! Keep in mind that we keep up with pret's documentation of pokeemerald, which means that if your project a bit old, you might get merge conflicts that you need to solve manually.
- If you haven't set up a remote, run the command `git remote add RHH https://github.com/rh-hideout/pokeemerald-expansion`.
- Once you have your remote set up, run the command `git pull RHH master`.

With this, you'll get the latest version of pokeemerald-expansion, plus a couple of bugfixes that haven't been released into the next patch version :)

## **How do I update my version of pokeemerald-expansion?**
- If you haven't set up a remote, run the command `git remote add RHH https://github.com/rh-hideout/pokeemerald-expansion`.
- Check your current version.
    - You can check in the debug menu's `Utilities -> Expansion Version` option.
    - If the option is not available, you possibly have version 1.6.2 or older. In that case, please check the [changelogs](CHANGELOG.md) to determine your version based on the features available on your repository.
- Once you have your remote set up, run the command `git pull RHH expansion/X.Y.Z`, replacing X, Y and Z with the digits of the respective version you want to update to (eg, to update to 1.9.3, use `git pull RHH expansion/1.9.3`).
    - ***Important:*** If you are several versions behind, we recommend updating one minor version at a time, skipping directly to the latest patch version (eg, 1.5.3 -> 1.6.2 -> 1.7.4 and so on)
- Alternatively, you can update to unreleased versions of the expansion.
    - ***master (stable):*** It contains unreleased **bugfixes** that will come in the next patch version. To merge, use `git pull RHH master`.
    - ***upcoming (unstable, with potential bugs):*** It contains unreleased **features** that will come in the next minor version. To merge, use `git pull RHH upcoming`.

### Please consider crediting the entire [list of contributors](https://github.com/rh-hideout/pokeemerald-expansion/wiki/Credits) in your project, as they have all worked hard to develop this project :)

## There's a bug in the project. How do I let you guys know?
Please submit any issues with the project [here](https://github.com/rh-hideout/pokeemerald-expansion/issues). Make sure that the issue wasn't reported by someone else by searching using the filters.

## Can I contribute even if I'm not a member of ROM Hacking Hideout?

Yes! Contributions are welcome via Pull Requests and they will be reviewed by maintainers. Don't feel discouraged if we take a bit to review your PR, we'll get to it.

## Who maintains the project?

The project was originally started by DizzyEgg alongside other contributors.

The project has now gotten larger and DizzyEgg is now maintaining the project as part of the ROM Hacking Hideout community. Some members of this community are taking on larger roles to help maintain the project.

## What is the ROM Hacking Hideout?

A Discord-based ROM hacking community that has many members who hack using the disassembly and decompilation projects for Pokémon. Quite a few contributors to the original feature branches by DizzyEgg were members of ROM Hacking Hideout. You can call it RHH for short!

[Click here to join the RHH Discord Server!](https://discord.gg/6CzjAG6GZk)
