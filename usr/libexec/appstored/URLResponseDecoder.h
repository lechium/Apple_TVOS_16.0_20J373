//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSURLResponseDecoder.h>

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface URLResponseDecoder : AMSURLResponseDecoder
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSMutableDictionary *_requestProperties;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000045895
- (void)_processResponseDictionary:(id)arg1 withRequestProperties:(id)arg2;	// IMP=0x001000000004583e
- (void)_importKeyBagFromDictionary:(id)arg1;	// IMP=0x0010000000045748
- (void)_discardRequestPropertiesForTask:(id)arg1;	// IMP=0x001000000004571f
- (id)_dequeueRequestPropertiesForTask:(id)arg1;	// IMP=0x0010000000045699
- (id)resultFromResult:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000454fb
- (void)registerRequestProperties:(id)arg1 forTask:(id)arg2;	// IMP=0x001000000004539d
- (void)discardRequestPropertiesForTask:(id)arg1;	// IMP=0x00100000000452ee
- (id)init;	// IMP=0x0010000000045247

@end

