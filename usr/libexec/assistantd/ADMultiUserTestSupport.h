//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ADMultiUserTestSupport : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_scoresBySharedID;	// 16 = 0x10
}

+ (id)sharedService;	// IMP=0x0040000000233055
- (void).cxx_destruct;	// IMP=0x0020000000233aea
- (id)getUserIdentityClassification;	// IMP=0x001000000023370f
- (id)getClassifiedUser;	// IMP=0x001000000023345f
- (id)getDebugVoiceIdScores;	// IMP=0x0010000000233347
- (void)updateVoiceIdScoreToUser:(id)arg1 score:(id)arg2 reset:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000233159
- (id)_init;	// IMP=0x00100000002330d0

@end
