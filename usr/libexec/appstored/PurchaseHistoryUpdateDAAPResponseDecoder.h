//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSNumber, NSString;

@interface PurchaseHistoryUpdateDAAPResponseDecoder : NSObject
{
    NSData *_data;	// 8 = 0x8
    _Bool _hasParsedData;	// 16 = 0x10
    NSNumber *_revision;	// 24 = 0x18
    NSNumber *_status;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000097c9a
@property(readonly) NSNumber *status; // @synthesize status=_status;
@property(readonly) NSNumber *revision; // @synthesize revision=_revision;
- (void)parser:(id)arg1 didEndContainerCode:(unsigned int)arg2;	// IMP=0x0010000000097c6c
- (void)parser:(id)arg1 didParseDataCode:(unsigned int)arg2 bytes:(char *)arg3 contentLength:(unsigned int)arg4;	// IMP=0x0010000000097bf1
- (void)parser:(id)arg1 didStartContainerCode:(unsigned int)arg2 contentLength:(unsigned int)arg3;	// IMP=0x0010000000097beb
- (_Bool)parser:(id)arg1 shouldParseCodeAsContainer:(unsigned int)arg2;	// IMP=0x0010000000097bdc
- (_Bool)parser:(id)arg1 shouldParseCode:(unsigned int)arg2;	// IMP=0x0010000000097bba
- (void)parser:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0010000000097ab4
- (void)parserDidCancel:(id)arg1;	// IMP=0x00100000000979d1
- (void)parser:(id)arg1 didFinishWithState:(long long)arg2;	// IMP=0x00100000000979c7
- (void)parserDidStart:(id)arg1;	// IMP=0x001000000009798b
- (void)parseMetadata;	// IMP=0x0010000000097916
- (id)initWithResponseData:(id)arg1;	// IMP=0x00100000000978ab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

