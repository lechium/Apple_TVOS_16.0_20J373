//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DESUserDefaultsStoreRecord, NSDate, NSString;

@interface MLRTrialSchedulingRecord : NSObject
{
    DESUserDefaultsStoreRecord *_storeRecord;	// 8 = 0x8
    NSDate *_lastCompletionDate;	// 16 = 0x10
    NSString *_recordID;	// 24 = 0x18
    long long _performCount;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000000cbd8
@property(nonatomic) long long performCount; // @synthesize performCount=_performCount;
@property(readonly, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
- (void);	// IMP=0x001000000000cba9
@property(retain, nonatomic) NSDate *lastCompletionDate; // @synthesize lastCompletionDate=_lastCompletionDate;
- (_Bool)commitWithError:(id *)arg1;	// IMP=0x001000000000cb63
- (id)description;	// IMP=0x001000000000cae5
- (id)initWithTaskID:(id)arg1;	// IMP=0x001000000000c9e3

@end

