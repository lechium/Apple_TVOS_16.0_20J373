//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVContentKeyResponse.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface AVContentKeyResponseClearKey : AVContentKeyResponse
{
    NSData *_keyData;	// 16 = 0x10
    NSData *_initializationVector;	// 24 = 0x18
}

- (void)dealloc;	// IMP=0x0000000000148b9f
- (id)initWithKeyData:(id)arg1 initializationVector:(id)arg2;	// IMP=0x0000000000148b10

@end

