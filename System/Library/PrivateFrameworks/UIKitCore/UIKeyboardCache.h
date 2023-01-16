//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, TIImageCacheClient, _UIActionWhenIdle;

__attribute__((visibility("hidden")))
@interface UIKeyboardCache : NSObject
{
    TIImageCacheClient *_store;	// 8 = 0x8
    NSSet *_layouts;	// 16 = 0x10
    NSMutableSet *_activeRenderers;	// 24 = 0x18
    _UIActionWhenIdle *_idleAction;	// 32 = 0x20
}

+ (_Bool)enabled;	// IMP=0x006000000092e1be
+ (id)sharedInstance;	// IMP=0x006000000092e181
- (void).cxx_destruct;	// IMP=0x0000000000930bea
@property(retain, nonatomic) _UIActionWhenIdle *idleAction; // @synthesize idleAction=_idleAction;
- (void)decrementExpectedRender:(id)arg1;	// IMP=0x0000000000930aef
- (void)incrementExpectedRender:(id)arg1;	// IMP=0x0000000000930a71
- (void)updateCacheForInputModes:(id)arg1;	// IMP=0x00000000009308f6
- (id)uniqueLayoutsFromInputModes:(id)arg1;	// IMP=0x0000000000930745
- (void)_didIdleAndShouldWait;	// IMP=0x00000000009306ba
- (void)_didIdle;	// IMP=0x0000000000930689
- (id)displayImagesForView:(id)arg1 fromLayout:(id)arg2 imageFlags:(id)arg3;	// IMP=0x000000000092ef81
- (void)drawCachedImage:(id)arg1 alpha:(double)arg2 inContext:(struct CGContext *)arg3;	// IMP=0x000000000092ee21
- (struct CGImage *)cachedCompositeImageForCacheKeys:(id)arg1 fromLayout:(id)arg2 opacities:(id)arg3;	// IMP=0x000000000092e6a6
- (struct CGImage *)cachedImageForKey:(id)arg1 fromLayout:(id)arg2;	// IMP=0x000000000092e5e1
- (void)purge;	// IMP=0x000000000092e5cb
- (void)clearNonPersistentCache;	// IMP=0x000000000092e5b2
- (void)commitTransaction;	// IMP=0x000000000092e599
- (void)dealloc;	// IMP=0x000000000092e50e
- (id)init;	// IMP=0x000000000092e2d2

@end

