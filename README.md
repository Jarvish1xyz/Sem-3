
## 🌐 Socials:
[![Instagram](https://img.shields.io/badge/Instagram-%23E4405F.svg?logo=Instagram&logoColor=white)](https://www.instagram.com/sinha__milan6/profilecard/?igsh=MXNuMGRyMTQ1aDNnaA%3D%3D) [![LinkedIn](https://img.shields.io/badge/LinkedIn-%230077B5.svg?logo=linkedin&logoColor=white)](https://www.linkedin.com/in/sinha-milan-325940321/?utm_source=share&utm_campaign=share_via&utm_content=profile&utm_medium=android_app) [![Pinterest](https://img.shields.io/badge/Pinterest-%23E60023.svg?logo=Pinterest&logoColor=white)](https://in.pinterest.com/milans04150483/) [![email](https://img.shields.io/badge/Email-D14836?logo=gmail&logoColor=white)](mailto:milans0415@gmail.com) 

# 💻 Tech Stack:
![C](https://img.shields.io/badge/c-%2300599C.svg?style=flat&logo=c&logoColor=white) ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=flat&logo=c%2B%2B&logoColor=white) ![CSS3](https://img.shields.io/badge/css3-%231572B6.svg?style=flat&logo=css3&logoColor=white) ![HTML5](https://img.shields.io/badge/html5-%23E34F26.svg?style=flat&logo=html5&logoColor=white) ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=flat&logo=openjdk&logoColor=white) ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=flat&logo=javascript&logoColor=%23F7DF1E) ![Netlify](https://img.shields.io/badge/netlify-%23000000.svg?style=flat&logo=netlify&logoColor=#00C7B7) ![Bootstrap](https://img.shields.io/badge/bootstrap-%238511FA.svg?style=flat&logo=bootstrap&logoColor=white) ![MicrosoftSQLServer](https://img.shields.io/badge/Microsoft%20SQL%20Server-CC2927?style=flat&logo=microsoft%20sql%20server&logoColor=white) ![Canva](https://img.shields.io/badge/Canva-%2300C4CC.svg?style=flat&logo=Canva&logoColor=white) ![GitHub](https://img.shields.io/badge/github-%23121011.svg?style=flat&logo=github&logoColor=white)
# 📊 GitHub Stats:
![](https://github-readme-stats.vercel.app/api?username=Jarvish1xyz&theme=dark&hide_border=true&include_all_commits=false&count_private=false)<br/>
![](https://nirzak-streak-stats.vercel.app/?user=Jarvish1xyz&theme=dark&hide_border=true)<br/>
![](https://github-readme-stats.vercel.app/api/top-langs/?username=Jarvish1xyz&theme=dark&hide_border=true&include_all_commits=false&count_private=false&layout=compact)

## 🏆 GitHub Trophies
![](https://github-profile-trophy.vercel.app/?username=Jarvish1xyz&theme=radical&no-frame=true&no-bg=false&margin-w=4)

### ✍️ Random Dev Quote
![](https://quotes-github-readme.vercel.app/api?type=horizontal&theme=gruvbox)

### 🔝 Top Contributed Repo
![](https://github-contributor-stats.vercel.app/api?username=Jarvish1xyz&limit=5&theme=dark&combine_all_yearly_contributions=true)

---
[![](https://visitcount.itsvg.in/api?id=Jarvish1xyz&icon=0&color=0)](https://visitcount.itsvg.in)

<!-- Proudly created with GPRM ( https://gprm.itsvg.in ) -->
#include <stdio.h>
#include <stdlib.h>
#define N 7

struct node{
    int info;
    struct node* lptr;
    struct node* rptr;
};

struct node* createNode(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->info = data;
    newNode->lptr = NULL;
    newNode->rptr = NULL;
    return newNode;
}


struct node* insertNode(struct node** root, int data) {
    if (*root == NULL) {
        *root = createNode(data);
        return *root;
    }
    return *root;
}


int findIndex(int* arr, int value, int start, int end) {
    for (int i = start; i <= end; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}




void makeBTree(struct node** root, int* pre, int* post,int s, int n) {
    if(*root==NULL) {
        insertNode(root, pre[0]);
    }
    int index = findIndex(post, (pre+1)[0], 0, n);
    if(index==-1) {
        return;
    }
    
    makeBTree(&((*root)->lptr), ++pre, post, s, index);
    makeBTree(&((*root)->rptr), ++pre, post, s, n - 1);
}


void inorder(struct node* root) {
    if (root == NULL) {
        return;
    }
    inorder(root->lptr);
    printf("%d ", root->info);
    inorder(root->rptr);

}





int main() {

    struct node* btree = NULL;

    int pre[N]={1,2,4,5,7,6,8}, post[N]={4,5,2,6,8,7,1};

    makeBTree(&btree, pre, post, 0, N-1);

    printf("Inorder traversal of the constructed binary tree: ");
    inorder(btree);
    printf("\n");

    return 0;
}
