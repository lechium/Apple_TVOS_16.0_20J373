//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKEncryptedData;

@interface CKDChainPCSData
{
    CKEncryptedData *_encryptedChainPCSPrivateKey;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000030861d
- (void).cxx_destruct;	// IMP=0x0000000000308768
@property(readonly, nonatomic) CKEncryptedData *encryptedChainPCSPrivateKey; // @synthesize encryptedChainPCSPrivateKey=_encryptedChainPCSPrivateKey;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003086a8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000308625
- (id)CKPropertiesDescription;	// IMP=0x0000000000308530
- (id)initWithPCSData:(id)arg1 encryptedPrivateKey:(id)arg2;	// IMP=0x00000000003084b8

@end

