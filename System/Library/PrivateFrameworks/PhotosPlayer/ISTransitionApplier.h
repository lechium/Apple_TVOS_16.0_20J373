//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ISTransitionApplier : NSObject
{
}

+ (id)defaultApplier;	// IMP=0x001000000002409f
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x0000000000023eea
- (void)setValue:(id)arg1 forKeyPath:(id)arg2 ofLayer:(id)arg3 withTransitionOptions:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000023c89
- (void)_applyScale:(double)arg1 toLayer:(id)arg2 withTransitionOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000023a41
- (void)_applyAlpha:(double)arg1 blurRadius:(double)arg2 toLayer:(id)arg3 withTransitionOptions:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000023744
- (void)applyScale:(double)arg1 withTransitionOptions:(id)arg2 toPhotoLayer:(id)arg3 videoLayer:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000234d0
- (void)applyOutputInfo:(id)arg1 withTransitionOptions:(id)arg2 toPhotoLayer:(id)arg3 videoLayer:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000023219

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

