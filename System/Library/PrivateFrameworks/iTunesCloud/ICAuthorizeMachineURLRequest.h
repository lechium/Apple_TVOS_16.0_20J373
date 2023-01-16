//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "ICStoreURLRequest.h"

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface ICAuthorizeMachineURLRequest : ICStoreURLRequest
{
    NSString *_keybagPath;	// 8 = 0x8
    NSString *_reason;	// 16 = 0x10
    NSData *_tokenData;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001395ca
@property(copy, nonatomic) NSData *tokenData; // @synthesize tokenData=_tokenData;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSString *keybagPath; // @synthesize keybagPath=_keybagPath;
- (void)buildStoreURLRequestWithURLRequest:(id)arg1 builderProperties:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001394ec

@end

