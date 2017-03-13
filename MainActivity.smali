.class public Lcom/coolapk/market/view/main/MainActivity;
.super Lcom/coolapk/market/view/base/BaseActivity;
.source "MainActivity.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/coolapk/market/view/main/MainActivity$AlertDownloadingDialog;
    }
.end annotation


# instance fields
.field private a:Lcom/coolapk/market/c/fe;

.field private b:Z

.field private c:J


# direct methods
.method public constructor <init>()V
    .locals 2

    .prologue
    .line 37
    invoke-direct {p0}, Lcom/coolapk/market/view/base/BaseActivity;-><init>()V

    .line 42
    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/coolapk/market/view/main/MainActivity;->c:J

    return-void
.end method

.method static synthetic a(Lcom/coolapk/market/view/main/MainActivity;)Lcom/coolapk/market/c/fe;
    .locals 1

    .prologue
    .line 37
    iget-object v0, p0, Lcom/coolapk/market/view/main/MainActivity;->a:Lcom/coolapk/market/c/fe;

    return-object v0
.end method

.method private sub_294_517(Landroid/content/Intent;)V
    .locals 2

    .prologue
    .line 144
    const-string v0, "140C1200043A010318"

    invoke-static {v0}, Lcom/qtfreet00;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 145
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 146
    invoke-virtual {p0}, Lcom/coolapk/market/view/main/MainActivity;->g()Lcom/coolapk/market/view/base/BaseActivity;

    move-result-object v1

    invoke-static {v1, v0}, Lcom/coolapk/market/manager/ActionManager;->z(Landroid/content/Context;Ljava/lang/String;)V

    .line 148
    :cond_0
    return-void
.end method

.method private sub_606_16()V
    .locals 4

    .prologue
    .line 103
    invoke-static {p0}, Lcom/tbruyelle/rxpermissions/RxPermissions;->getInstance(Landroid/content/Context;)Lcom/tbruyelle/rxpermissions/RxPermissions;

    move-result-object v0

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/String;

    const/4 v2, 0x0

    const-string v3, "101A02000A0C105F040300080C07021D091C4B32263820232D203D2034262833293A27253B34332220"

    invoke-static {v3}, Lcom/qtfreet00;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    aput-object v3, v1, v2

    .line 104
    invoke-virtual {v0, v1}, Lcom/tbruyelle/rxpermissions/RxPermissions;->request([Ljava/lang/String;)Lc/e;

    move-result-object v0

    new-instance v1, Lcom/coolapk/market/app/b;

    invoke-direct {v1}, Lcom/coolapk/market/app/b;-><init>()V

    .line 105
    invoke-virtual {v0, v1}, Lc/e;->b(Lc/k;)Lc/l;

    .line 106
    return-void
.end method

.method private sub_511_689()V
    .locals 6

    .prologue
    const/4 v1, 0x0

    const/4 v5, 0x0

    .line 109
    invoke-virtual {p0}, Lcom/coolapk/market/view/main/MainActivity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Intent;->getData()Landroid/net/Uri;

    move-result-object v2

    .line 110
    if-eqz v2, :cond_1

    invoke-virtual {v2}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object v0

    const-string v3, "121B091E0804061A1112"

    invoke-static {v3}, Lcom/qtfreet00;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 111
    invoke-virtual {v2}, Landroid/net/Uri;->getHost()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0}, Lcom/coolapk/market/view/main/MainActivity;->getPackageName()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 112
    invoke-virtual {v2}, Landroid/net/Uri;->getLastPathSegment()Ljava/lang/String;

    move-result-object v3

    const/4 v0, -0x1

    invoke-virtual {v3}, Ljava/lang/String;->hashCode()I

    move-result v4

    sparse-switch v4, :sswitch_data_0

    :cond_0
    :goto_0
    packed-switch v0, :pswitch_data_0

    .line 141
    :cond_1
    :goto_1
    return-void

    .line 112
    :sswitch_0
    const-string v4, "1F11112D03001115"

    invoke-static {v4}, Lcom/qtfreet00;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    move v0, v1

    goto :goto_0

    :sswitch_1
    const-string v4, "01150117"

    invoke-static {v4}, Lcom/qtfreet00;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :sswitch_2
    const-string v4, "1004162D08041A10130300"

    invoke-static {v4}, Lcom/qtfreet00;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    const/4 v0, 0x2

    goto :goto_0

    :sswitch_3
    const-string v4, "02110700060D"

    invoke-static {v4}, Lcom/qtfreet00;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    const/4 v0, 0x3

    goto :goto_0

    .line 114
    :pswitch_0
    invoke-virtual {p0}, Lcom/coolapk/market/view/main/MainActivity;->g()Lcom/coolapk/market/view/base/BaseActivity;

    move-result-object v0

    invoke-static {v0, v5}, Lcom/coolapk/market/manager/ActionManager;->a(Landroid/app/Activity;Lcom/coolapk/market/model/Feed;)V

    goto :goto_1

    .line 118
    :pswitch_1
    const-string v0, "131B12060A082B01150117"

    invoke-static {v0}, Lcom/qtfreet00;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    .line 119
    const-string v1, "121C0F1E013A04101303"

    invoke-static {v1}, Lcom/qtfreet00;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    .line 120
    if-ltz v0, :cond_1

    if-ltz v1, :cond_1

    .line 121
    iget-object v2, p0, Lcom/coolapk/market/view/main/MainActivity;->a:Lcom/coolapk/market/c/fe;

    invoke-virtual {v2}, Lcom/coolapk/market/c/fe;->i()Landroid/view/View;

    move-result-object v2

    new-instance v3, Lcom/coolapk/market/view/main/MainActivity$1;

    invoke-direct {v3, p0, v0, v1}, Lcom/coolapk/market/view/main/MainActivity$1;-><init>(Lcom/coolapk/market/view/main/MainActivity;II)V

    invoke-virtual {v2, v3}, Landroid/view/View;->post(Ljava/lang/Runnable;)Z

    goto :goto_1

    .line 132
    :pswitch_2
    invoke-virtual {p0}, Lcom/coolapk/market/view/main/MainActivity;->g()Lcom/coolapk/market/view/base/BaseActivity;

    move-result-object v0

    invoke-static {v0}, Lcom/coolapk/market/manager/ActionManager;->g(Landroid/content/Context;)V

    goto :goto_1

    .line 136
    :pswitch_3
    invoke-virtual {p0}, Lcom/coolapk/market/view/main/MainActivity;->g()Lcom/coolapk/market/view/base/BaseActivity;

    move-result-object v0

    invoke-static {v0, v5, v5, v1}, Lcom/coolapk/market/manager/ActionManager;->a(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;I)V

    goto/16 :goto_1

    .line 112
    :sswitch_data_0
    .sparse-switch
        -0x36059a58 -> :sswitch_3
        -0x18ed8071 -> :sswitch_2
        0x34628f -> :sswitch_1
        0x5211f8dd -> :sswitch_0
    .end sparse-switch

    :pswitch_data_0
    .packed-switch 0x0
        :pswitch_0
        :pswitch_1
        :pswitch_2
        :pswitch_3
    .end packed-switch
.end method


# virtual methods
.method protected sub_233_215()V
    .locals 0

    .prologue
    .line 164
    invoke-static {p0}, Lcom/coolapk/market/util/at;->c(Landroid/app/Activity;)V

    .line 165
    return-void
.end method

.method public sub_106_590(Lcom/coolapk/market/AppTheme;)V
    .locals 4

    .prologue
    .line 169
    invoke-virtual {p0}, Lcom/coolapk/market/view/main/MainActivity;->l()V

    .line 171
    iget-object v0, p0, Lcom/coolapk/market/view/main/MainActivity;->a:Lcom/coolapk/market/c/fe;

    iget-object v0, v0, Lcom/coolapk/market/c/fe;->c:Landroid/widget/FrameLayout;

    invoke-virtual {v0}, Landroid/widget/FrameLayout;->getId()I

    move-result v1

    .line 172
    invoke-virtual {p0}, Lcom/coolapk/market/view/main/MainActivity;->getFragmentManager()Landroid/app/FragmentManager;

    move-result-object v2

    .line 173
    invoke-virtual {v2, v1}, Landroid/app/FragmentManager;->findFragmentById(I)Landroid/app/Fragment;

    move-result-object v0

    check-cast v0, Lcom/coolapk/market/view/main/MainFragment;

    .line 174
    invoke-static {}, Lcom/coolapk/market/view/main/MainFragment;->a()Lcom/coolapk/market/view/main/MainFragment;

    move-result-object v3

    .line 175
    invoke-virtual {v2, v0}, Landroid/app/FragmentManager;->saveFragmentInstanceState(Landroid/app/Fragment;)Landroid/app/Fragment$SavedState;

    move-result-object v0

    .line 176
    invoke-virtual {v3, v0}, Landroid/app/Fragment;->setInitialSavedState(Landroid/app/Fragment$SavedState;)V

    .line 177
    invoke-virtual {v2}, Landroid/app/FragmentManager;->beginTransaction()Landroid/app/FragmentTransaction;

    move-result-object v0

    invoke-virtual {v0, v1, v3}, Landroid/app/FragmentTransaction;->replace(ILandroid/app/Fragment;)Landroid/app/FragmentTransaction;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/FragmentTransaction;->commitAllowingStateLoss()I

    .line 178
    return-void
.end method

.method public sub_696_788()V
    .locals 6

    .prologue
    const/4 v2, 0x0

    .line 182
    invoke-virtual {p0}, Lcom/coolapk/market/view/main/MainActivity;->getFragmentManager()Landroid/app/FragmentManager;

    move-result-object v0

    iget-object v1, p0, Lcom/coolapk/market/view/main/MainActivity;->a:Lcom/coolapk/market/c/fe;

    iget-object v1, v1, Lcom/coolapk/market/c/fe;->c:Landroid/widget/FrameLayout;

    invoke-virtual {v1}, Landroid/widget/FrameLayout;->getId()I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/app/FragmentManager;->findFragmentById(I)Landroid/app/Fragment;

    move-result-object v0

    check-cast v0, Lcom/coolapk/market/view/main/MainFragment;

    .line 183
    if-eqz v0, :cond_2

    invoke-virtual {v0}, Lcom/coolapk/market/view/main/MainFragment;->isVisible()Z

    move-result v1

    if-eqz v1, :cond_2

    .line 184
    invoke-virtual {v0}, Lcom/coolapk/market/view/main/MainFragment;->d()I

    move-result v1

    if-nez v1, :cond_1

    .line 186
    invoke-virtual {v0}, Lcom/coolapk/market/view/main/MainFragment;->c()Landroid/app/Fragment;

    move-result-object v0

    check-cast v0, Lcom/coolapk/market/view/main/MarketFragment;

    .line 187
    invoke-virtual {v0}, Lcom/coolapk/market/view/main/MarketFragment;->d()I

    move-result v1

    if-eqz v1, :cond_2

    .line 188
    invoke-virtual {v0, v2}, Lcom/coolapk/market/view/main/MarketFragment;->e(I)V

    .line 234
    :cond_0
    :goto_0
    return-void

    .line 191
    :cond_1
    invoke-virtual {v0}, Lcom/coolapk/market/view/main/MainFragment;->d()I

    move-result v1

    if-eqz v1, :cond_2

    .line 192
    invoke-virtual {v0, v2}, Lcom/coolapk/market/view/main/MainFragment;->a(I)V

    .line 193
    invoke-virtual {v0}, Lcom/coolapk/market/view/main/MainFragment;->c()Landroid/app/Fragment;

    move-result-object v0

    check-cast v0, Lcom/coolapk/market/view/main/MarketFragment;

    .line 194
    invoke-virtual {v0}, Lcom/coolapk/market/view/main/MarketFragment;->d()I

    move-result v1

    if-eqz v1, :cond_0

    .line 195
    invoke-virtual {v0, v2}, Lcom/coolapk/market/view/main/MarketFragment;->e(I)V

    goto :goto_0

    .line 201
    :cond_2
    invoke-static {}, Lcom/coolapk/market/manager/e;->a()Lcom/coolapk/market/manager/e;

    move-result-object v0

    invoke-virtual {v0}, Lcom/coolapk/market/manager/e;->j()I

    move-result v0

    if-lez v0, :cond_3

    .line 203
    invoke-static {}, Lcom/coolapk/market/view/main/MainActivity$AlertDownloadingDialog;->a()Lcom/coolapk/market/view/main/MainActivity$AlertDownloadingDialog;

    move-result-object v0

    invoke-virtual {p0}, Lcom/coolapk/market/view/main/MainActivity;->getFragmentManager()Landroid/app/FragmentManager;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Lcom/coolapk/market/view/main/MainActivity$AlertDownloadingDialog;->show(Landroid/app/FragmentManager;Ljava/lang/String;)V

    goto :goto_0

    .line 208
    :cond_3
    invoke-static {}, Lcom/coolapk/market/util/q;->a()J

    move-result-wide v0

    .line 209
    iget-wide v2, p0, Lcom/coolapk/market/view/main/MainActivity;->c:J

    sub-long v2, v0, v2

    const-wide/16 v4, 0xbb8

    cmp-long v2, v2, v4

    if-lez v2, :cond_4

    .line 210
    iput-wide v0, p0, Lcom/coolapk/market/view/main/MainActivity;->c:J

    .line 211
    invoke-virtual {p0}, Lcom/coolapk/market/view/main/MainActivity;->g()Lcom/coolapk/market/view/base/BaseActivity;

    move-result-object v0

    const-string v1, "94F2EB94E9EC90C9F480DEC48DCBE591FDEC8CF1DA98F4E697E2DF"

    invoke-static {v1}, Lcom/qtfreet00;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/coolapk/market/widget/k;->a(Landroid/content/Context;Ljava/lang/String;)V

    goto :goto_0

    .line 215
    :cond_4
    invoke-super {p0}, Lcom/coolapk/market/view/base/BaseActivity;->onBackPressed()V

    .line 217
    invoke-virtual {p0}, Lcom/coolapk/market/view/main/MainActivity;->isFinishing()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 218
    invoke-static {p0}, Lcom/coolapk/market/manager/ActionManager;->a(Landroid/content/Context;)V

    .line 219
    invoke-static {p0}, Lcom/coolapk/market/manager/ActionManager;->e(Landroid/content/Context;)V

    .line 220
    invoke-static {p0}, Landroid/support/v4/app/NotificationManagerCompat;->from(Landroid/content/Context;)Landroid/support/v4/app/NotificationManagerCompat;

    move-result-object v0

    invoke-virtual {v0}, Landroid/support/v4/app/NotificationManagerCompat;->cancelAll()V

    .line 222
    invoke-static {}, Lcom/coolapk/market/manager/e;->a()Lcom/coolapk/market/manager/e;

    move-result-object v0

    invoke-virtual {v0}, Lcom/coolapk/market/manager/e;->m()V

    .line 224
    invoke-static {}, Lcom/coolapk/market/b;->d()Lcom/coolapk/market/d;

    move-result-object v0

    const-string v1, "12180313173A1710170E173A0A1A2E111E1B11"

    invoke-static {v1}, Lcom/qtfreet00;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/coolapk/market/d;->b(Ljava/lang/String;)Z

    move-result v0

    .line 225
    invoke-static {v0}, Lcom/coolapk/market/manager/ActionManager;->a(Z)Lc/e;

    move-result-object v0

    new-instance v1, Lcom/coolapk/market/view/main/MainActivity$2;

    invoke-direct {v1, p0}, Lcom/coolapk/market/view/main/MainActivity$2;-><init>(Lcom/coolapk/market/view/main/MainActivity;)V

    .line 226
    invoke-virtual {v0, v1}, Lc/e;->b(Lc/k;)Lc/l;

    goto/16 :goto_0
.end method

.method protected sub_945_886(Landroid/os/Bundle;)V
    .locals 4

    .prologue
    const/4 v1, 0x1

    .line 46
    invoke-virtual {p0}, Lcom/coolapk/market/view/main/MainActivity;->h()V

    .line 47
    invoke-super {p0, p1}, Lcom/coolapk/market/view/base/BaseActivity;->onCreate(Landroid/os/Bundle;)V

    .line 50
    const/4 v0, 0x0

    .line 51
    invoke-virtual {p0}, Lcom/coolapk/market/view/main/MainActivity;->getIntent()Landroid/content/Intent;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Intent;->getData()Landroid/net/Uri;

    move-result-object v2

    .line 52
    if-eqz v2, :cond_0

    invoke-virtual {v2}, Landroid/net/Uri;->getHost()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0}, Lcom/coolapk/market/view/main/MainActivity;->getPackageName()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    move v0, v1

    .line 57
    :cond_0
    invoke-virtual {p0}, Lcom/coolapk/market/view/main/MainActivity;->getIntent()Landroid/content/Intent;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Intent;->getFlags()I

    move-result v2

    const/high16 v3, 0x400000

    and-int/2addr v2, v3

    if-eqz v2, :cond_1

    if-nez v0, :cond_1

    .line 59
    iput-boolean v1, p0, Lcom/coolapk/market/view/main/MainActivity;->b:Z

    .line 60
    invoke-virtual {p0}, Lcom/coolapk/market/view/main/MainActivity;->finish()V

    .line 100
    :goto_0
    return-void

    .line 64
    :cond_1
    if-nez p1, :cond_2

    .line 65
    invoke-static {}, Lcom/coolapk/market/b;->d()Lcom/coolapk/market/d;

    move-result-object v0

    invoke-virtual {p0}, Lcom/coolapk/market/view/main/MainActivity;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/coolapk/market/d;->c(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 68
    :try_start_0
    invoke-virtual {p0}, Lcom/coolapk/market/view/main/MainActivity;->g()Lcom/coolapk/market/view/base/BaseActivity;

    move-result-object v0

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/coolapk/market/manager/ActionManager;->b(Landroid/content/Context;Z)V
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0

    .line 75
    :cond_2
    :goto_1
    invoke-virtual {p0}, Lcom/coolapk/market/view/main/MainActivity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/coolapk/market/view/main/MainActivity;->a(Landroid/content/Intent;)V

    .line 78
    invoke-static {p0}, Lcom/coolapk/market/manager/ActionManager;->c(Landroid/content/Context;)V

    .line 80
    const v0, 0x7f0400d5

    invoke-static {p0, v0}, Landroid/databinding/e;->a(Landroid/app/Activity;I)Landroid/databinding/o;

    move-result-object v0

    check-cast v0, Lcom/coolapk/market/c/fe;

    iput-object v0, p0, Lcom/coolapk/market/view/main/MainActivity;->a:Lcom/coolapk/market/c/fe;

    .line 82
    invoke-virtual {p0}, Lcom/coolapk/market/view/main/MainActivity;->getFragmentManager()Landroid/app/FragmentManager;

    move-result-object v0

    iget-object v1, p0, Lcom/coolapk/market/view/main/MainActivity;->a:Lcom/coolapk/market/c/fe;

    iget-object v1, v1, Lcom/coolapk/market/c/fe;->c:Landroid/widget/FrameLayout;

    invoke-virtual {v1}, Landroid/widget/FrameLayout;->getId()I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/app/FragmentManager;->findFragmentById(I)Landroid/app/Fragment;

    move-result-object v0

    check-cast v0, Lcom/coolapk/market/view/main/MainFragment;

    .line 83
    if-nez v0, :cond_3

    .line 84
    invoke-static {}, Lcom/coolapk/market/view/main/MainFragment;->a()Lcom/coolapk/market/view/main/MainFragment;

    move-result-object v0

    .line 85
    invoke-virtual {p0}, Lcom/coolapk/market/view/main/MainActivity;->getFragmentManager()Landroid/app/FragmentManager;

    move-result-object v1

    invoke-virtual {v1}, Landroid/app/FragmentManager;->beginTransaction()Landroid/app/FragmentTransaction;

    move-result-object v1

    iget-object v2, p0, Lcom/coolapk/market/view/main/MainActivity;->a:Lcom/coolapk/market/c/fe;

    iget-object v2, v2, Lcom/coolapk/market/c/fe;->c:Landroid/widget/FrameLayout;

    .line 86
    invoke-virtual {v2}, Landroid/widget/FrameLayout;->getId()I

    move-result v2

    invoke-virtual {v1, v2, v0}, Landroid/app/FragmentTransaction;->replace(ILandroid/app/Fragment;)Landroid/app/FragmentTransaction;

    move-result-object v0

    .line 87
    invoke-virtual {v0}, Landroid/app/FragmentTransaction;->commitAllowingStateLoss()I

    .line 89
    invoke-virtual {p0}, Lcom/coolapk/market/view/main/MainActivity;->getFragmentManager()Landroid/app/FragmentManager;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/FragmentManager;->executePendingTransactions()Z

    .line 93
    :cond_3
    :try_start_1
    invoke-direct {p0}, Lcom/coolapk/market/view/main/MainActivity;->e()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    .line 97
    :goto_2
    invoke-virtual {p0}, Lcom/coolapk/market/view/main/MainActivity;->g()Lcom/coolapk/market/view/base/BaseActivity;

    move-result-object v0

    invoke-static {v0}, Lcom/coolapk/market/manager/ActionManager;->O(Landroid/content/Context;)V

    .line 99
    invoke-direct {p0}, Lcom/coolapk/market/view/main/MainActivity;->c()V

    goto :goto_0

    .line 69
    :catch_0
    move-exception v0

    .line 71
    const-string v0, "22040A13160D3103060900"

    invoke-static {v0}, Lcom/qtfreet00;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "96D2E795F1CD90CBF283E2CA80FED991FDCC8AD9F894E7DA97F6D99BCDF880E6DB8DCBF690DBD281DED8"

    invoke-static {v1}, Lcom/qtfreet00;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_1

    .line 94
    :catch_1
    move-exception v0

    .line 95
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_2
.end method

.method protected sub_897_80()V
    .locals 0

    .prologue
    .line 238
    invoke-super {p0}, Lcom/coolapk/market/view/base/BaseActivity;->onDestroy()V

    .line 239
    return-void
.end method

.method protected sub_638_321()V
    .locals 4

    .prologue
    .line 152
    invoke-super {p0}, Lcom/coolapk/market/view/base/BaseActivity;->onResume()V

    .line 153
    iget-boolean v0, p0, Lcom/coolapk/market/view/main/MainActivity;->b:Z

    if-nez v0, :cond_1

    .line 154
    invoke-static {}, Lcom/coolapk/market/b;->d()Lcom/coolapk/market/d;

    move-result-object v0

    invoke-virtual {v0}, Lcom/coolapk/market/d;->v()J

    move-result-wide v0

    .line 155
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    sub-long v0, v2, v0

    const-wide/32 v2, 0xea60

    cmp-long v0, v0, v2

    if-lez v0, :cond_0

    .line 156
    invoke-static {}, Lcom/coolapk/market/manager/ActionManager;->b()V

    .line 158
    :cond_0
    invoke-static {p0}, Lcom/coolapk/market/manager/ActionManager;->P(Landroid/content/Context;)V

    .line 160
    :cond_1
    return-void
.end method

.method private native a(Landroid/content/Intent;)V

.end method

.method private native c()V

.end method

.method private native e()V

.end method

.method protected native b_()V

.end method

.method public native onAppThemeChange(Lcom/coolapk/market/AppTheme;)V

.end method

.method public native onBackPressed()V

.end method

.method protected native onCreate(Landroid/os/Bundle;)V

.end method

.method protected native onDestroy()V

.end method

.method protected native onResume()V

.end method

.method public static constructor <clinit>()V
    .locals 1
    const-string v0,"smalisafe"
    invoke-static {v0}, Ljava/lang/System;->loadLibrary(Ljava/lang/String;)V
   const-string v0,"smalisafe"
    invoke-static {v0}, Ljava/lang/System;->loadLibrary(Ljava/lang/String;)V
    return-void
.end method

.method private native sub_798(Landroid/content/Intent;)V

.end method

.method private native sub_84()V

.end method

.method private native sub_438()V

.end method

.method protected native sub_588()V

.end method

.method public native sub_274(Lcom/coolapk/market/AppTheme;)V

.end method

.method public native sub_616()V

.end method

.method protected native sub_752(Landroid/os/Bundle;)V

.end method

.method protected native sub_728()V

.end method

.method protected native sub_199()V

.end method

.method private native sub_907(Landroid/content/Intent;)V

.end method

.method private native sub_925()V

.end method

.method private native sub_657()V

.end method

.method protected native sub_953()V

.end method

.method public native sub_391(Lcom/coolapk/market/AppTheme;)V

.end method

.method public native sub_963()V

.end method

.method protected native sub_824(Landroid/os/Bundle;)V

.end method

.method protected native sub_976()V

.end method

.method protected native sub_355()V

.end method
