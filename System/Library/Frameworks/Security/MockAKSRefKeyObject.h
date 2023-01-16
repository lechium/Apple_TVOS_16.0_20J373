//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, _SFAESKey;

__attribute__((visibility("hidden")))
@interface MockAKSRefKeyObject : NSObject
{
    NSData *_keyData;	// 8 = 0x8
    _SFAESKey *_key;	// 16 = 0x10
    NSData *_acmHandle;	// 24 = 0x18
    NSData *_externalData;	// 32 = 0x20
    NSData *_blob;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000050ebc
@property(retain) NSData *blob; // @synthesize blob=_blob;
@property(retain) NSData *externalData; // @synthesize externalData=_externalData;
@property(retain) NSData *acmHandle; // @synthesize acmHandle=_acmHandle;
@property(retain) _SFAESKey *key; // @synthesize key=_key;
@property(retain) NSData *keyData; // @synthesize keyData=_keyData;
- (id)initWithKeyData:(id)arg1 parameters:(id)arg2 error:(id *)arg3;	// IMP=0x000000000005099e

@end

