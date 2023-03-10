//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterFoundation/GKPlayer.h>

@interface GKPlayer (UIPrivate)
+ (void)preloadImagesForPlayers:(id)arg1 size:(long long)arg2;	// IMP=0x00800000000b3bae
+ (id)monogramQueue;	// IMP=0x00800000000b261e
+ (long long)sizeForPhotoSize:(long long)arg1;	// IMP=0x00800000000b183e
- (void)clearInMemoryCachedAvatars;	// IMP=0x00100000000b3a21
- (void)_playerAvatarWithSize:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b303d
- (void)playerAvatarImageWithSize:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b2f30
- (void)playerAvatarDataWithSize:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b2e23
- (void)monogramImageWithPhotoSize:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b267a
- (void)renderMonogramImageWithPhotoSize:(long long)arg1 monogramString:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b24ad
- (id)avatarImageRenderer;	// IMP=0x00100000000b2458
- (id)atvMonogramImageWithPhotoSize:(long long)arg1 monogramString:(id)arg2;	// IMP=0x00100000000b2224
- (id)placeholderImageWithPhotoSize:(long long)arg1;	// IMP=0x00100000000b212d
- (id)stringForMonogram;	// IMP=0x00100000000b209a
- (id)displayNameForMonogram;	// IMP=0x00100000000b1ff9
- (id)monogramPersonNameComponents;	// IMP=0x00100000000b1ae9
- (id)photoURLForSize:(long long)arg1;	// IMP=0x00100000000b1a13
- (void)showAlertWithTitle:(id)arg1 andMessage:(id)arg2;	// IMP=0x00100000000b16cc
- (void)_loadPhotoForSize:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b3d53
- (void)loadPhotoForSize:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b3c26
@end

