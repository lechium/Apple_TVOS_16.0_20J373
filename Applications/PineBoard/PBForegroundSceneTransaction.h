//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSTransaction.h>

@class FBSSceneIdentity;

@interface PBForegroundSceneTransaction : BSTransaction
{
    _Bool _backgroundAllOtherScenes;	// 8 = 0x8
    FBSSceneIdentity *_sceneIdentity;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000014a71b
@property(readonly, nonatomic) _Bool backgroundAllOtherScenes; // @synthesize backgroundAllOtherScenes=_backgroundAllOtherScenes;
@property(readonly, nonatomic) FBSSceneIdentity *sceneIdentity; // @synthesize sceneIdentity=_sceneIdentity;
- (void)_begin;	// IMP=0x001000000014a3ae
- (id)initWithSceneIdentity:(id)arg1 backgroundAllOtherScenes:(_Bool)arg2;	// IMP=0x001000000014a32e

@end
