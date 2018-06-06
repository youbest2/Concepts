To copy a command from BASH terminal in windows just select and write click.   
```Comments```    
```variable_V``` :  try be replace by meaningful content   

### To initialize a directory   
```git init```                  ''' This will create a local repository.This command creates an empty Git repository - basically a   
                             .git directory with subdirectories for objects, refs/heads, refs/tags, and template files.   
                              An initial HEAD file that references the HEAD of the master branch is also created. '''   

### To clone a repository   
```git clone url_V```    

### To add a new file to the repository - copy the new file in the repository and run command to index it   
```git add filepath_V```              '''This command updates the index using the current content found in the   
                                    working tree, to prepare the content staged for the next commit.'''   

### To commit means prepare the file locally to push to the repository   
```git commit -m "My head line_COMMENTS_V" -m "My content line_COMMENTS_V."```   

##### can be set before start of activities after "git init"   
### May required to set username and email address   
```git config --global user.name "Your Name_V"```   
 ```git config --global user.email you@example.com_V```   
#### After doing this, you may fix the identity used for this commit with:   
    ```git commit --amend --reset-author```   

### To push the changes to the repository ''' Updates remote refs using local refs, while sending objects necessary to complete the given refs.   
```git push --set-upstream origin master```      ''' Example below    
```git push --set-upstream http://github.conti.de/user22_V/GitPractice.git master```   

### to resync local repository with the remote repository   
```git pull```   

### A fork is a copy of a repository. Forking a repository allows you to freely experiment with changes without affecting the original project.   
