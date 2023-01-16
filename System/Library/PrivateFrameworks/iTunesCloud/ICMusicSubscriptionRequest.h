//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "ICRequestOperation.h"

@class ICStoreRequestContext;

__attribute__((visibility("hidden")))
@interface ICMusicSubscriptionRequest : ICRequestOperation
{
    ICStoreRequestContext *_storeRequestContext;	// 8 = 0x8
    long long _requestType;	// 16 = 0x10
    _Bool _requestingOfflineSlot;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000847c
- (id)_bagKeyForRequestType:(long long)arg1;	// IMP=0x0000000000008455
- (void)execute;	// IMP=0x00000000000083c5
- (id)initWithStoreRequestContext:(id)arg1 requestType:(long long)arg2 requestingOfflineSlot:(_Bool)arg3;	// IMP=0x0000000000008333

@end

