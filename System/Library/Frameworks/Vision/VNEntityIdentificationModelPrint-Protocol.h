//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Vision/NSObject-Protocol.h>

@class NSData, VNRequestSpecifier;
@protocol VNEntityIdentificationModelPrint;

@protocol VNEntityIdentificationModelPrint <NSObject>
@property(readonly) NSData *VNEntityIdentificationModelPrintData;
@property(readonly) unsigned long long VNEntityIdentificationModelPrintByteLength;
@property(readonly) unsigned long long VNEntityIdentificationModelPrintElementType;
@property(readonly) unsigned long long VNEntityIdentificationModelPrintElementCount;
@property(readonly, copy) VNRequestSpecifier *VNEntityIdentificationModelPrintOriginatingRequestSpecifier;
- (_Bool)isEquivalentToVNEntityIdentificationModelPrint:(id <VNEntityIdentificationModelPrint>)arg1;
@end

