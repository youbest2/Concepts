Use the pwd command to see which path you are currently in, handy when you did a right-click "Git Bash here..."   
$ cd /C/Users/User/Documents/GitPractice      ; to change directory   
$ cd "C:\Program Files"    ; if folder name has spaces   
(use ```"git reset HEAD <file>..."``` to unstage)   
### TO push in a branch "Modification_2 : create d localy"   
```git push --set-upstream origin Modification_2```  

### You can change the most recent commit message using the ```git commit --amend``` command.   
```git commit --amend```    
#### Amending the message of the most recently pushed commit   
Follow the steps above to amend the commit message.
Use the push --force command to force push over the old commit.
```git push --force example-branch```   

### Amending the message of older or multiple commit messages   
If you need to amend the message for multiple commits or an older commit, you can use interactive rebase, then force push to change the commit history.   
On the command line, navigate to the repository that contains the commit you want to amend.   
Use the ```git rebase -i HEAD~n``` command to display a list of the last ```n``` commits in your default text editor.   
````git rebase -i HEAD~3```` # Displays a list of the last ```3 commits``` on the current branch    

## Changing history   
If it is the most recent commit, you can simply do this:   
```git commit --amend```   
This brings up the editor with the last commit message and lets you edit the message. (You can use -m if you want to wipe out the old    message and use a new one.)   
#### Pushing   
And then when you push, do this:   
```git push --force-with-lease <repository> <branch>```   
Or you can use "+":   

```git push <repository> +<branch>```   
ex : ```git push --force-with-lease git@github.com:youbest2/Dummy.git +Modification_1```   
Or you can use ```--force:```   

```git push --force <repository> <branch>```   
Be careful when using these commands.   

If someone else pushed changes to the same branch, you probably want to avoid destroying those changes. The --force-with-lease option is the safest, because it will abort if there are any upstream changes (
If you don't specify the branch explicitly, Git will use the default push settings. If your default push setting is "matching", then you may destroy changes on several branches at the same time.   

#### Pulling / fetching afterwards   
Anyone who already pulled will now get an error message, and they will need to update (assuming they aren't making any changes    themselves) by doing something like this:   

##### git fetch origin   
```git reset --hard origin/master``` # Loses local commits   
Be careful when using ```reset --hard```. If you have changes to the branch, those changes will be destroyed.   

### A note about modifying history
The destroyed data is really just the old commit message, but --force doesn't know that, and will happily delete other data too. So    think of --force as "I want to destroy data, and I know for sure what data is being destroyed." But when the destroyed data is    committed, you can often recover old commits from the reflog—the data is actually orphaned instead of destroyed (although orphaned    commits are periodically deleted).   

If you don't think you're destroying data, then stay away from --force... bad things might happen.   

This is why ```--force-with-lease``` is somewhat safer.   

