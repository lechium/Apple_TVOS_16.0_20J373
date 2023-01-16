//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface NGMPBP256Key : PBCodable
{
    NSData *_keyData;	// 8 = 0x8
    NSString *_keychainTag;	// 16 = 0x10
    int _keystore;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001ab58
@property(retain, nonatomic) NSData *keyData; // @synthesize keyData=_keyData;
@property(nonatomic) int keystore; // @synthesize keystore=_keystore;
@property(retain, nonatomic) NSString *keychainTag; // @synthesize keychainTag=_keychainTag;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001aa7d
- (unsigned long long)hash;	// IMP=0x000000000001aa0e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001a935
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001a889
- (void)copyTo:(id)arg1;	// IMP=0x000000000001a818
- (void)writeTo:(id)arg1;	// IMP=0x000000000001a7a4
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001a797
- (id)dictionaryRepresentation;	// IMP=0x000000000001a470
- (id)description;	// IMP=0x000000000001a3c1
@property(readonly, nonatomic) _Bool hasKeyData;
- (int)StringAsKeystore:(id)arg1;	// IMP=0x000000000001a2f8
- (id)keystoreAsString:(int)arg1;	// IMP=0x000000000001a2ad
@property(readonly, nonatomic) _Bool hasKeychainTag;

@end
