//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTTransport_replayer, NSData, NSDictionary;

@interface GTTransportMessage_replayer : NSObject
{
    NSData *_payload;	// 8 = 0x8
    NSDictionary *_attributes;	// 16 = 0x10
    GTTransport_replayer *_transport;	// 24 = 0x18
    NSData *_encodedAttributes;	// 32 = 0x20
    id _decodedPayload;	// 40 = 0x28
    unsigned int _decodedPayloadType;	// 48 = 0x30
    int _kind;	// 52 = 0x34
    unsigned int _serial;	// 56 = 0x38
    unsigned int _replySerial;	// 60 = 0x3c
    unsigned int _transportSize;	// 64 = 0x40
}

+ (id)messageWithKind:(int)arg1 attributes:(id)arg2 objectPayload:(id)arg3;	// IMP=0x0020000000025f7a
+ (id)messageWithKind:(int)arg1 objectPayload:(id)arg2;	// IMP=0x0010000000025f46
+ (id)messageWithKind:(int)arg1 attributes:(id)arg2 stringPayload:(id)arg3;	// IMP=0x0010000000025f05
+ (id)messageWithKind:(int)arg1 stringPayload:(id)arg2;	// IMP=0x0010000000025ed1
+ (id)messageWithKind:(int)arg1 attributes:(id)arg2 plistPayload:(id)arg3;	// IMP=0x0010000000025e90
+ (id)messageWithKind:(int)arg1 plistPayload:(id)arg2;	// IMP=0x0010000000025e5c
+ (id)messageWithKind:(int)arg1 attributes:(id)arg2 boolPayload:(_Bool)arg3;	// IMP=0x0010000000025e1b
+ (id)messageWithKind:(int)arg1 boolPayload:(_Bool)arg2;	// IMP=0x0010000000025de7
+ (id)messageWithKind:(int)arg1 attributes:(id)arg2 payload:(id)arg3;	// IMP=0x0010000000025da6
+ (id)messageWithKind:(int)arg1 payload:(id)arg2;	// IMP=0x0010000000025d72
+ (id)messageWithKind:(int)arg1 attributes:(id)arg2;	// IMP=0x0010000000025d3d
+ (id)messageWithKind:(int)arg1;	// IMP=0x0010000000025d0b
@property(readonly, nonatomic) unsigned int transportSize; // @synthesize transportSize=_transportSize;
@property(readonly, retain, nonatomic) GTTransport_replayer *transport; // @synthesize transport=_transport;
@property(readonly, nonatomic) unsigned int replySerial; // @synthesize replySerial=_replySerial;
@property(readonly, nonatomic) unsigned int serial; // @synthesize serial=_serial;
@property(retain, nonatomic) NSData *encodedAttributes; // @synthesize encodedAttributes=_encodedAttributes;
@property(readonly, retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly, retain, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property(readonly, nonatomic) int kind; // @synthesize kind=_kind;
- (id)objectPayload;	// IMP=0x0010000000025a58
- (id)stringPayload;	// IMP=0x0010000000025a02
- (id)plistPayload;	// IMP=0x00100000000258af
- (_Bool)boolPayload;	// IMP=0x00100000000257ef
- (_Bool)boolForKey:(id)arg1;	// IMP=0x00100000000257b1
- (double)doubleForKey:(id)arg1;	// IMP=0x0010000000025773
- (unsigned long long)uint64ForKey:(id)arg1;	// IMP=0x0010000000025735
- (unsigned int)uint32ForKey:(id)arg1;	// IMP=0x00100000000256f7
- (id)attributeForKey:(id)arg1;	// IMP=0x00100000000256c6
- (void)_setTransportSize:(unsigned int)arg1;	// IMP=0x00100000000256bd
- (void)_setSerial:(unsigned int)arg1 replySerial:(unsigned int)arg2 transport:(id)arg3;	// IMP=0x001000000002569a
- (_Bool)hasBeenSent;	// IMP=0x0010000000025681
- (id)description;	// IMP=0x001000000002561b
- (void)dealloc;	// IMP=0x00100000000255bc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002556c
- (id)initWithKind:(int)arg1 attributes:(id)arg2 objectPayload:(id)arg3;	// IMP=0x0010000000025495
- (id)initWithKind:(int)arg1 attributes:(id)arg2 stringPayload:(id)arg3;	// IMP=0x0010000000025420
- (id)initWithKind:(int)arg1 attributes:(id)arg2 plistPayload:(id)arg3;	// IMP=0x00100000000253a8
- (id)initWithKind:(int)arg1 attributes:(id)arg2 boolPayload:(_Bool)arg3;	// IMP=0x001000000002531a
- (id)initWithKind:(int)arg1 attributes:(id)arg2 payload:(id)arg3;	// IMP=0x00100000000252a2
- (id)init;	// IMP=0x0010000000025277

@end
