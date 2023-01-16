//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

@interface CSAdBlockerAssetDecoderV1 : NSObject
{
    float _maxFingerprintBufferSize;	// 8 = 0x8
    NSMutableDictionary *_shouldResetAdsDictionary;	// 16 = 0x10
    NSString *_assetVersion;	// 24 = 0x18
    NSData *_payloadData;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000e27c4
@property(retain, nonatomic) NSData *payloadData; // @synthesize payloadData=_payloadData;
@property(readonly, nonatomic) NSString *assetVersion; // @synthesize assetVersion=_assetVersion;
@property(readonly, nonatomic) NSMutableDictionary *shouldResetAdsDictionary; // @synthesize shouldResetAdsDictionary=_shouldResetAdsDictionary;
@property(readonly, nonatomic) float maxFingerprintBufferSize; // @synthesize maxFingerprintBufferSize=_maxFingerprintBufferSize;
- (id)initWithData:(id)arg1;	// IMP=0x00100000000e2702

@end

