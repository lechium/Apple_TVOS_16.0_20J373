//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, PBCodable;

@protocol BMProtoBufWrapper
- (PBCodable *)proto;
- (id)initWithProto:(PBCodable *)arg1;
- (NSData *)encodeAsProto;
- (id)initWithProtoData:(NSData *)arg1;
@end

