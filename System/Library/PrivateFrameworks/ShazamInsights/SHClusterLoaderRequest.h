//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface SHClusterLoaderRequest : NSObject
{
    NSURL *_sourceURL;	// 8 = 0x8
    NSURL *_outputURL;	// 16 = 0x10
    long long _type;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000ad59
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(readonly, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
- (void)clusterConfiguration:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ac91
- (void)sourceURLWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ac75
- (void)URLForRequestForStorefront:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a9d1
@property(readonly, nonatomic) _Bool shouldDeleteExistingDatabaseAtOutputURL;
- (id)initWithType:(long long)arg1 sourceURL:(id)arg2 outputURL:(id)arg3;	// IMP=0x000000000000a91e
- (id)initWithType:(long long)arg1;	// IMP=0x000000000000a907

@end

