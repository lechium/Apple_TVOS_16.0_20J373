//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PromotedIAPDatabase;

@interface PromotedIAPManager : NSObject
{
    PromotedIAPDatabase *_database;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0040000000198915
- (void).cxx_destruct;	// IMP=0x002000000019908d
- (void)removeOverridesForApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000199077
- (void)getInfoInternalForApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000198a48
- (void)setVisibility:(long long)arg1 forIAP:(id)arg2 app:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000198a32
- (void)getVisibilityForIAPs:(id)arg1 app:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000198a1c
- (void)setOrderForIAPs:(id)arg1 app:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000198a06
- (void)getOrderForIAPsInApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001989f0
- (id)init;	// IMP=0x001000000019899a

@end
