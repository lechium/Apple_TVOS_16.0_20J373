//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CSDMessagingHandle, NSString, TULabeledHandle;

@interface CSDMessagingLabeledHandle : PBCodable
{
    CSDMessagingHandle *_handle;	// 8 = 0x8
    NSString *_label;	// 16 = 0x10
}

+ (id)handleWithTULabeledHandle:(id)arg1;	// IMP=0x0010000000065655
- (void).cxx_destruct;	// IMP=0x0010000000146f1c
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) CSDMessagingHandle *handle; // @synthesize handle=_handle;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000146e55
- (unsigned long long)hash;	// IMP=0x0010000000146e08
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000146d40
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000146ca2
- (void)copyTo:(id)arg1;	// IMP=0x0010000000146c3f
- (void)writeTo:(id)arg1;	// IMP=0x0010000000146be2
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000146bd5
- (id)dictionaryRepresentation;	// IMP=0x0010000000146938
- (id)description;	// IMP=0x0010000000146889
@property(readonly, nonatomic) _Bool hasLabel;
@property(readonly, nonatomic) _Bool hasHandle;
@property(readonly, nonatomic) TULabeledHandle *tuLabeledHandle;

@end

