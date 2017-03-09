.class public Lcom/hoimk/jian/MainActivity;
.super Landroid/support/v7/app/AppCompatActivity;
.source "MainActivity.java"

# interfaces
.implements Landroid/view/View$OnClickListener;
.implements Landroid/widget/AdapterView$OnItemClickListener;


# instance fields
.field add:Landroid/widget/ImageView;

.field doneLayout:Landroid/widget/LinearLayout;

.field list:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List",
            "<",
            "Lcom/hoimk/jian/db/note;",
            ">;"
        }
    .end annotation
.end field

.field listView:Landroid/widget/ListView;


# direct methods
.method public constructor <init>()V
    .locals 0

    .prologue
    .line 20
    invoke-direct {p0}, Landroid/support/v7/app/AppCompatActivity;-><init>()V

    return-void
.end method


# virtual methods
.method findView_after()V
    .locals 1

    .prologue
    .line 41
    const v0, 0x7f0a005f

    invoke-virtual {p0, v0}, Lcom/hoimk/jian/MainActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/LinearLayout;

    iput-object v0, p0, Lcom/hoimk/jian/MainActivity;->doneLayout:Landroid/widget/LinearLayout;

    .line 42
    const v0, 0x7f0a005e

    invoke-virtual {p0, v0}, Lcom/hoimk/jian/MainActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ListView;

    iput-object v0, p0, Lcom/hoimk/jian/MainActivity;->listView:Landroid/widget/ListView;

    .line 43
    const v0, 0x7f0a0062

    invoke-virtual {p0, v0}, Lcom/hoimk/jian/MainActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/hoimk/jian/MainActivity;->add:Landroid/widget/ImageView;

    .line 44
    return-void
.end method

.method protected onActivityResult_after(IILandroid/content/Intent;)V
    .locals 1
    .param p1, "requestCode"    # I
    .param p2, "resultCode"    # I
    .param p3, "data"    # Landroid/content/Intent;

    .prologue
    .line 60
    packed-switch p1, :pswitch_data_0

    .line 68
    :cond_0
    :goto_0
    return-void

    .line 63
    :pswitch_0
    const/4 v0, -0x1

    if-ne p2, v0, :cond_0

    .line 64
    invoke-virtual {p0}, Lcom/hoimk/jian/MainActivity;->refreshList()V

    goto :goto_0

    .line 60
    nop

    :pswitch_data_0
    .packed-switch 0x63
        :pswitch_0
        :pswitch_0
    .end packed-switch
.end method

.method public onClick_after(Landroid/view/View;)V
    .locals 3
    .param p1, "view"    # Landroid/view/View;

    .prologue
    .line 47
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v1

    packed-switch v1, :pswitch_data_0

    .line 56
    :goto_0
    :pswitch_0
    return-void

    .line 50
    :pswitch_1
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    .line 51
    .local v0, "intent":Landroid/content/Intent;
    const-class v1, Lcom/hoimk/jian/EditActivity;

    invoke-virtual {v0, p0, v1}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    .line 52
    const-string v1, "method"

    const-string v2, "new"

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 53
    const/16 v1, 0x64

    invoke-virtual {p0, v0, v1}, Lcom/hoimk/jian/MainActivity;->startActivityForResult(Landroid/content/Intent;I)V

    goto :goto_0

    .line 47
    nop

    :pswitch_data_0
    .packed-switch 0x7f0a005f
        :pswitch_1
        :pswitch_0
        :pswitch_0
        :pswitch_1
    .end packed-switch
.end method

.method protected onCreate_after(Landroid/os/Bundle;)V
    .locals 1
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .prologue
    .line 28
    invoke-super {p0, p1}, Landroid/support/v7/app/AppCompatActivity;->onCreate(Landroid/os/Bundle;)V

    .line 29
    const v0, 0x7f03001c

    invoke-virtual {p0, v0}, Lcom/hoimk/jian/MainActivity;->setContentView(I)V

    .line 30
    invoke-virtual {p0}, Lcom/hoimk/jian/MainActivity;->findView()V

    .line 31
    invoke-virtual {p0}, Lcom/hoimk/jian/MainActivity;->refreshList()V

    .line 34
    iget-object v0, p0, Lcom/hoimk/jian/MainActivity;->doneLayout:Landroid/widget/LinearLayout;

    invoke-virtual {v0, p0}, Landroid/widget/LinearLayout;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 35
    iget-object v0, p0, Lcom/hoimk/jian/MainActivity;->add:Landroid/widget/ImageView;

    invoke-virtual {v0, p0}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 37
    iget-object v0, p0, Lcom/hoimk/jian/MainActivity;->listView:Landroid/widget/ListView;

    invoke-virtual {v0, p0}, Landroid/widget/ListView;->setOnItemClickListener(Landroid/widget/AdapterView$OnItemClickListener;)V

    .line 38
    return-void
.end method

.method public onItemClick_after(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 5
    .param p2, "view"    # Landroid/view/View;
    .param p3, "i"    # I
    .param p4, "l"    # J
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/AdapterView",
            "<*>;",
            "Landroid/view/View;",
            "IJ)V"
        }
    .end annotation

    .prologue
    .line 89
    .local p1, "adapterView":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    iget-object v3, p0, Lcom/hoimk/jian/MainActivity;->listView:Landroid/widget/ListView;

    invoke-virtual {v3}, Landroid/widget/ListView;->getAdapter()Landroid/widget/ListAdapter;

    move-result-object v0

    check-cast v0, Lcom/hoimk/jian/adapter/NoteAdapter;

    .line 90
    .local v0, "adapter":Lcom/hoimk/jian/adapter/NoteAdapter;
    invoke-virtual {v0, p3}, Lcom/hoimk/jian/adapter/NoteAdapter;->getItem(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/hoimk/jian/db/note;

    .line 91
    .local v2, "note":Lcom/hoimk/jian/db/note;
    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1}, Landroid/content/Intent;-><init>()V

    .line 92
    .local v1, "intent":Landroid/content/Intent;
    const-class v3, Lcom/hoimk/jian/EditActivity;

    invoke-virtual {v1, p0, v3}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    .line 93
    const-string v3, "id"

    invoke-virtual {v2}, Lcom/hoimk/jian/db/note;->getId()I

    move-result v4

    invoke-virtual {v1, v3, v4}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 94
    const-string v3, "method"

    const-string v4, "edit"

    invoke-virtual {v1, v3, v4}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 95
    const/16 v3, 0x63

    invoke-virtual {p0, v1, v3}, Lcom/hoimk/jian/MainActivity;->startActivityForResult(Landroid/content/Intent;I)V

    .line 96
    return-void
.end method

.method refreshList_after()V
    .locals 5

    .prologue
    const/16 v3, 0x8

    const/4 v4, 0x0

    .line 71
    invoke-static {p0}, Lcom/hoimk/jian/db/DatabaseHelper;->getInstance(Landroid/content/Context;)Lcom/hoimk/jian/db/DatabaseHelper;

    move-result-object v1

    .line 72
    .local v1, "helper":Lcom/hoimk/jian/db/DatabaseHelper;
    invoke-virtual {v1}, Lcom/hoimk/jian/db/DatabaseHelper;->GetAllNote()Ljava/util/List;

    move-result-object v2

    iput-object v2, p0, Lcom/hoimk/jian/MainActivity;->list:Ljava/util/List;

    .line 73
    iget-object v2, p0, Lcom/hoimk/jian/MainActivity;->list:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    if-gtz v2, :cond_0

    .line 74
    iget-object v2, p0, Lcom/hoimk/jian/MainActivity;->doneLayout:Landroid/widget/LinearLayout;

    invoke-virtual {v2, v4}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 75
    iget-object v2, p0, Lcom/hoimk/jian/MainActivity;->add:Landroid/widget/ImageView;

    invoke-virtual {v2, v3}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 76
    iget-object v2, p0, Lcom/hoimk/jian/MainActivity;->listView:Landroid/widget/ListView;

    invoke-virtual {v2, v3}, Landroid/widget/ListView;->setVisibility(I)V

    .line 85
    :goto_0
    return-void

    .line 79
    :cond_0
    iget-object v2, p0, Lcom/hoimk/jian/MainActivity;->add:Landroid/widget/ImageView;

    invoke-virtual {v2, v4}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 80
    iget-object v2, p0, Lcom/hoimk/jian/MainActivity;->doneLayout:Landroid/widget/LinearLayout;

    invoke-virtual {v2, v3}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 81
    new-instance v0, Lcom/hoimk/jian/adapter/NoteAdapter;

    const v2, 0x7f03001d

    iget-object v3, p0, Lcom/hoimk/jian/MainActivity;->list:Ljava/util/List;

    invoke-direct {v0, p0, v2, v3}, Lcom/hoimk/jian/adapter/NoteAdapter;-><init>(Landroid/content/Context;ILjava/util/List;)V

    .line 82
    .local v0, "adapter":Lcom/hoimk/jian/adapter/NoteAdapter;
    iget-object v2, p0, Lcom/hoimk/jian/MainActivity;->listView:Landroid/widget/ListView;

    invoke-virtual {v2, v4}, Landroid/widget/ListView;->setVisibility(I)V

    .line 83
    iget-object v2, p0, Lcom/hoimk/jian/MainActivity;->listView:Landroid/widget/ListView;

    invoke-virtual {v2, v0}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    goto :goto_0
.end method

.method public native findView()V

.end method

.method protected native onActivityResult(IILandroid/content/Intent;)V

.end method

.method public native onClick(Landroid/view/View;)V

.end method

.method protected native onCreate(Landroid/os/Bundle;)V

.end method

.method public native onItemClick(Landroid/widget/AdapterView;Landroid/view/View;IJ)V

.end method

.method public native refreshList()V

.end method

.method public constructor <clinit>()V
    .locals 1
    const-string v0,"smalisafe"
    invoke-static {v0}, Ljava/lang/System;->loadLibrary(Ljava/lang/String;)V
    return-void
.end method
