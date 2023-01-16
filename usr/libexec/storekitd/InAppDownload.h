//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class InAppDownloadTask, NSDictionary, NSNumber, NSString;

@interface InAppDownload : NSObject
{
    NSNumber *_identifier;	// 8 = 0x8
    NSString *_transactionIdentifier;	// 16 = 0x10
    NSDictionary *_info;	// 24 = 0x18
    InAppDownloadTask *_task;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000002d33f
@property(retain, nonatomic) InAppDownloadTask *task; // @synthesize task=_task;
@property(readonly, nonatomic) NSDictionary *info; // @synthesize info=_info;
@property(readonly, nonatomic) NSString *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property(readonly, nonatomic) NSNumber *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 transactionIdentifier:(id)arg2 info:(id)arg3;	// IMP=0x001000000002d24f

@end

