//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKPublicKey, NSData;

@interface CKDTrustedTargetWrappedKey : NSObject
{
    NSData *_wrappedKey;	// 8 = 0x8
    CKPublicKey *_publicKey;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000163e3a
@property(copy, nonatomic) CKPublicKey *publicKey; // @synthesize publicKey=_publicKey;
@property(copy, nonatomic) NSData *wrappedKey; // @synthesize wrappedKey=_wrappedKey;
- (id)initWithWrappedKey:(id)arg1 publicKey:(id)arg2;	// IMP=0x0000000000163d6f

@end

