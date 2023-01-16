//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SecCDKeychain;

@interface SFKeychainServer : NSObject
{
    SecCDKeychain *_keychain;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001d21cf
- (id)_keychain;	// IMP=0x00100000001d21c1
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000001d1e45
- (id)initWithStorageURL:(id)arg1 modelURL:(id)arg2 encryptDatabase:(_Bool)arg3;	// IMP=0x00100000001d1d93

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

