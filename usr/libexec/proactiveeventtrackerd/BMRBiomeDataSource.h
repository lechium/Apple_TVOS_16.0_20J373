//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BPSPublisher, NSDictionary, NSString;
@protocol BMRBiomeStreamDecoder;

@interface BMRBiomeDataSource : NSObject
{
    void *_dlHandle;	// 8 = 0x8
    NSDictionary *_config;	// 16 = 0x10
    BPSPublisher *_publisher;	// 24 = 0x18
    id <BMRBiomeStreamDecoder> _decoder;	// 32 = 0x20
}

+ (_Bool)validateConfig:(id)arg1 error:(id *)arg2;	// IMP=0x0020000000014dc2
+ (id)_parseStartTime:(id)arg1;	// IMP=0x0010000000014d40
+ (_Bool)_setError:(id *)arg1 withDescription:(id)arg2;	// IMP=0x0010000000014c42
- (void).cxx_destruct;	// IMP=0x0020000000014358
@property(readonly) id <BMRBiomeStreamDecoder> decoder; // @synthesize decoder=_decoder;
@property(readonly) BPSPublisher *publisher; // @synthesize publisher=_publisher;
@property(readonly) NSDictionary *config; // @synthesize config=_config;
- (void)enumerateKeyValuePairsWithBlock:(CDUnknownBlockType)arg1 onError:(CDUnknownBlockType)arg2 onCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000141f7
- (void)dealloc;	// IMP=0x00100000000141bd
- (id)initWithConfig:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000013646

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

