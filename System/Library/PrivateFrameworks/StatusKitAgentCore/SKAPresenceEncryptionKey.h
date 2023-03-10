//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface SKAPresenceEncryptionKey : NSObject
{
    NSData *_keyData;	// 8 = 0x8
}

+ (id)logger;	// IMP=0x006000000003197f
- (void).cxx_destruct;	// IMP=0x00000000000319f6
@property(retain, nonatomic) NSData *keyData; // @synthesize keyData=_keyData;
- (id)_randomBytesWithLength:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000003186a
- (_Bool)_initializeNewKeyMaterial;	// IMP=0x000000000003179c
@property(readonly, nonatomic) NSData *keyMaterial;
- (id)decryptPayload:(id)arg1;	// IMP=0x00000000000313a5
- (id)encryptPayload:(id)arg1;	// IMP=0x0000000000031050
- (id)initWithKeyMaterial:(id)arg1;	// IMP=0x0000000000030f9a
- (id)initWithNewKeyMaterial;	// IMP=0x0000000000030f2c

@end

