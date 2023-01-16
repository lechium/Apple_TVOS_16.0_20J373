//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol P256PrivateKeyProtocol;

__attribute__((visibility("hidden")))
@interface FullKey : NSObject
{
    int _keyStore;	// 8 = 0x8
    id <P256PrivateKeyProtocol> _key;	// 16 = 0x10
    NSString *_keychainTag;	// 24 = 0x18
}

+ (id)generateNewKeyWithAccess:(id)arg1 forceNoSEP:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00600000000042b0
+ (id)generateNewKeyWithAccess:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000004299
- (void).cxx_destruct;	// IMP=0x0000000000004c28
@property(retain) NSString *keychainTag; // @synthesize keychainTag=_keychainTag;
@property(readonly) int keyStore; // @synthesize keyStore=_keyStore;
@property(readonly) id <P256PrivateKeyProtocol> key; // @synthesize key=_key;
- (id)protobuffer;	// IMP=0x0000000000004b18
- (id)description;	// IMP=0x0000000000004a64
- (id)keyIdentifier;	// IMP=0x00000000000049ae
- (id)initWithKeychainTag:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004725
- (id)initWithCTKTokenOID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004692
- (id)initWithProtobufferData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000044eb
- (id)initWithKey:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004365

@end

