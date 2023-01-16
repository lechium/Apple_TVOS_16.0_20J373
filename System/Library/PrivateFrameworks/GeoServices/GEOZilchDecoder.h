//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEOMapRequestManager.h"

@class NSObject;
@protocol GEOMapAccessRestrictions, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOZilchDecoder : GEOMapRequestManager
{
    NSObject<OS_dispatch_queue> *_decoderQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_requestQueue;	// 32 = 0x20
    struct mutex _lock;	// 40 = 0x28
    id <GEOMapAccessRestrictions> _mapAccessRestrictions;	// 104 = 0x68
}

+ (_Bool)decodingSupported;	// IMP=0x0060000000d1d603
- (id).cxx_construct;	// IMP=0x0000000000d1d9c9
- (void).cxx_destruct;	// IMP=0x0000000000d1d97a
@property(nonatomic) __weak id <GEOMapAccessRestrictions> mapAccessRestrictions; // @synthesize mapAccessRestrictions=_mapAccessRestrictions;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *decoderQueue; // @synthesize decoderQueue=_decoderQueue;
- (void)requestComplete:(id)arg1;	// IMP=0x0000000000d1d8b0
- (void)trackRequest:(id)arg1;	// IMP=0x0000000000d1d824
- (id)decodeZilchMessage:(shared_ptr_27244a92)arg1 pathHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000d1d6ee
- (void)setRequestQueue:(id)arg1;	// IMP=0x0000000000d1d6da
- (id)requestQueue;	// IMP=0x0000000000d1d6c5
- (id)init;	// IMP=0x0000000000d1d61c

@end

