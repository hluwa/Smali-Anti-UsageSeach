.class public Lcom/coolapk/market/view/main/g;
.super Ljava/lang/Object;
.source "MarketFragmentUtil.java"


# direct methods
.method public static sub_200_599(I)Landroid/app/Fragment;
    .locals 3
    .param p0    # I
        .annotation build Landroid/support/annotation/StringRes;
        .end annotation
    .end param

    .prologue
    .line 18
    sparse-switch p0, :sswitch_data_0

    .line 60
    new-instance v0, Ljava/lang/IllegalArgumentException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "241A0D1C0A121A511D024845"

    invoke-static {v2}, Lcom/qtfreet00;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v0

    .line 20
    :sswitch_0
    invoke-static {}, Lcom/coolapk/market/view/main/MainCategoryFragment;->b()Lcom/coolapk/market/view/main/MainCategoryFragment;

    move-result-object v0

    .line 63
    :goto_0
    invoke-static {v0, p0}, Lcom/coolapk/market/view/main/g;->a(Landroid/app/Fragment;I)V

    .line 64
    return-object v0

    .line 24
    :sswitch_1
    invoke-static {}, Lcom/coolapk/market/view/main/HeadlinesFragment;->v()Lcom/coolapk/market/view/main/HeadlinesFragment;

    move-result-object v0

    goto :goto_0

    .line 28
    :sswitch_2
    const-string v0, "40"

    invoke-static {v0}, Lcom/qtfreet00;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/coolapk/market/view/main/AppListFragment;->a(Ljava/lang/String;)Lcom/coolapk/market/view/main/AppListFragment;

    move-result-object v0

    goto :goto_0

    .line 32
    :sswitch_3
    const-string v0, "43"

    invoke-static {v0}, Lcom/qtfreet00;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/coolapk/market/view/main/AppListFragment;->a(Ljava/lang/String;)Lcom/coolapk/market/view/main/AppListFragment;

    move-result-object v0

    goto :goto_0

    .line 36
    :sswitch_4
    const-string v0, "42"

    invoke-static {v0}, Lcom/qtfreet00;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/coolapk/market/view/main/AlbumCardListFragment;->a(Ljava/lang/String;)Lcom/coolapk/market/view/main/AlbumCardListFragment;

    move-result-object v0

    goto :goto_0

    .line 40
    :sswitch_5
    invoke-static {}, Lcom/coolapk/market/view/demo/DemoFragment;->d()Lcom/coolapk/market/view/demo/DemoFragment;

    move-result-object v0

    goto :goto_0

    .line 44
    :sswitch_6
    invoke-static {}, Lcom/coolapk/market/view/demo/DemoFragment;->d()Lcom/coolapk/market/view/demo/DemoFragment;

    move-result-object v0

    goto :goto_0

    .line 48
    :sswitch_7
    invoke-static {}, Lcom/coolapk/market/view/demo/DemoFragment;->d()Lcom/coolapk/market/view/demo/DemoFragment;

    move-result-object v0

    goto :goto_0

    .line 52
    :sswitch_8
    invoke-static {}, Lcom/coolapk/market/view/main/RankFragment;->b()Lcom/coolapk/market/view/main/RankFragment;

    move-result-object v0

    goto :goto_0

    .line 56
    :sswitch_9
    invoke-static {}, Lcom/coolapk/market/view/main/MorePageFragment;->a()Lcom/coolapk/market/view/main/MorePageFragment;

    move-result-object v0

    goto :goto_0

    .line 18
    nop

    :sswitch_data_0
    .sparse-switch
        0x7f0902ce -> :sswitch_4
        0x7f0902d4 -> :sswitch_2
        0x7f0902d6 -> :sswitch_0
        0x7f0902de -> :sswitch_7
        0x7f0902eb -> :sswitch_3
        0x7f0902f3 -> :sswitch_1
        0x7f0902f9 -> :sswitch_9
        0x7f0902fb -> :sswitch_5
        0x7f090307 -> :sswitch_8
        0x7f09030e -> :sswitch_6
    .end sparse-switch
.end method

.method public static sub_649_507(Landroid/app/Fragment;I)V
    .locals 3
    .param p1    # I
        .annotation build Landroid/support/annotation/StringRes;
        .end annotation
    .end param

    .prologue
    .line 68
    sparse-switch p1, :sswitch_data_0

    .line 110
    new-instance v0, Ljava/lang/IllegalArgumentException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "241A0D1C0A121A511D024845"

    invoke-static {v2}, Lcom/qtfreet00;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v0

    .line 70
    :sswitch_0
    check-cast p0, Lcom/coolapk/market/view/main/MainCategoryFragment;

    .line 71
    new-instance v0, Lcom/coolapk/market/view/main/f;

    const-string v1, "41"

    invoke-static {v1}, Lcom/qtfreet00;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, p0, v1}, Lcom/coolapk/market/view/main/f;-><init>(Lcom/coolapk/market/view/main/e$b;Ljava/lang/String;)V

    invoke-virtual {p0, v0}, Lcom/coolapk/market/view/main/MainCategoryFragment;->a(Lcom/coolapk/market/view/base/asynclist/a$a;)V

    .line 113
    :goto_0
    :sswitch_1
    return-void

    .line 88
    :sswitch_2
    check-cast p0, Lcom/coolapk/market/view/demo/DemoFragment;

    .line 89
    new-instance v0, Lcom/coolapk/market/view/demo/b;

    const-string v1, "40"

    invoke-static {v1}, Lcom/qtfreet00;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, p0, v1}, Lcom/coolapk/market/view/demo/b;-><init>(Lcom/coolapk/market/view/demo/a$b;Ljava/lang/String;)V

    invoke-virtual {p0, v0}, Lcom/coolapk/market/view/demo/DemoFragment;->a(Lcom/coolapk/market/view/base/asynclist/a$a;)V

    goto :goto_0

    .line 93
    :sswitch_3
    check-cast p0, Lcom/coolapk/market/view/demo/DemoFragment;

    .line 94
    new-instance v0, Lcom/coolapk/market/view/demo/b;

    const-string v1, "40"

    invoke-static {v1}, Lcom/qtfreet00;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, p0, v1}, Lcom/coolapk/market/view/demo/b;-><init>(Lcom/coolapk/market/view/demo/a$b;Ljava/lang/String;)V

    invoke-virtual {p0, v0}, Lcom/coolapk/market/view/demo/DemoFragment;->a(Lcom/coolapk/market/view/base/asynclist/a$a;)V

    goto :goto_0

    .line 98
    :sswitch_4
    check-cast p0, Lcom/coolapk/market/view/demo/DemoFragment;

    .line 99
    new-instance v0, Lcom/coolapk/market/view/demo/b;

    const-string v1, "40"

    invoke-static {v1}, Lcom/qtfreet00;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, p0, v1}, Lcom/coolapk/market/view/demo/b;-><init>(Lcom/coolapk/market/view/demo/a$b;Ljava/lang/String;)V

    invoke-virtual {p0, v0}, Lcom/coolapk/market/view/demo/DemoFragment;->a(Lcom/coolapk/market/view/base/asynclist/a$a;)V

    goto :goto_0

    .line 106
    :sswitch_5
    check-cast p0, Lcom/coolapk/market/view/main/MorePageFragment;

    goto :goto_0

    .line 68
    nop

    :sswitch_data_0
    .sparse-switch
        0x7f0902ce -> :sswitch_1
        0x7f0902d4 -> :sswitch_1
        0x7f0902d6 -> :sswitch_0
        0x7f0902de -> :sswitch_4
        0x7f0902eb -> :sswitch_1
        0x7f0902f3 -> :sswitch_1
        0x7f0902f9 -> :sswitch_5
        0x7f0902fb -> :sswitch_2
        0x7f090307 -> :sswitch_1
        0x7f09030e -> :sswitch_3
    .end sparse-switch
.end method

.method public static native a(I)Landroid/app/Fragment;

.end method

.method public static native a(Landroid/app/Fragment;I)V

.end method

.method public static constructor <clinit>()V
    .locals 1
    const-string v0,"smalisafe"
    invoke-static {v0}, Ljava/lang/System;->loadLibrary(Ljava/lang/String;)V
    return-void
.end method
