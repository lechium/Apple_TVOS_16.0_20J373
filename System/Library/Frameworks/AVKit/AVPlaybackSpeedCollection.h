//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVPlaybackSpeed, NSArray;
@protocol AVPlaybackSpeedCollectionDelegate;

__attribute__((visibility("hidden")))
@interface AVPlaybackSpeedCollection : NSObject
{
    id <AVPlaybackSpeedCollectionDelegate> _delegate;	// 8 = 0x8
    NSArray *_speeds;	// 16 = 0x10
    AVPlaybackSpeed *_activeSpeed;	// 24 = 0x18
}

+ (id)defaultSpeedFromList:(id)arg1;	// IMP=0x006000000002f651
+ (id)keyPathsForValuesAffectingDisplaySpeeds;	// IMP=0x006000000002f625
+ (id)keyPathsForValuesAffectingSelectedSpeed;	// IMP=0x006000000002f605
+ (id)collectionWithSpeeds:(id)arg1;	// IMP=0x006000000002f5bc
- (void).cxx_destruct;	// IMP=0x000000000002f28c
- (id)description;	// IMP=0x000000000002f280
- (id)debugDescription;	// IMP=0x000000000002f274
- (id)internalDescription;	// IMP=0x000000000002f265
- (id)displaySpeeds;	// IMP=0x000000000002f1ea
- (void)setDelegate:(id)arg1;	// IMP=0x000000000002f196
- (id)delegate;	// IMP=0x000000000002f180
- (void)setActiveSpeed:(id)arg1;	// IMP=0x000000000002f135
- (id)activeSpeed;	// IMP=0x000000000002f127
- (void)selectNextPlaybackSpeed:(id)arg1;	// IMP=0x000000000002ef4e
- (void)selectSpeed:(id)arg1;	// IMP=0x000000000002ee97
@property(readonly, nonatomic) AVPlaybackSpeed *selectedSpeed;
@property(readonly, nonatomic) NSArray *speeds;
- (id)_initInternalWithSpeeds:(id)arg1;	// IMP=0x000000000002ed3d

@end
