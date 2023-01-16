//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;

@interface DMDManageAppPromptPolicy : NSObject
{
    NSArray *_promptTimestamps;	// 8 = 0x8
    long long _promptsAllowed;	// 16 = 0x10
    double _promptResetTimeInterval;	// 24 = 0x18
    NSDate *_overrideDate;	// 32 = 0x20
}

+ (double)promptWindowInterval;	// IMP=0x0040000000052a45
+ (long long)promptsAllowedBeforeAutomaticDenial;	// IMP=0x00100000000529a1
+ (id)timestampsKey;	// IMP=0x0010000000052994
- (void).cxx_destruct;	// IMP=0x0020000000053302
@property(copy, nonatomic) NSDate *overrideDate; // @synthesize overrideDate=_overrideDate;
@property(readonly, nonatomic) double promptResetTimeInterval; // @synthesize promptResetTimeInterval=_promptResetTimeInterval;
@property(readonly, nonatomic) long long promptsAllowed; // @synthesize promptsAllowed=_promptsAllowed;
@property(copy, nonatomic) NSArray *promptTimestamps; // @synthesize promptTimestamps=_promptTimestamps;
- (id)_timestampDictionaryForWritingToFile;	// IMP=0x001000000005320a
- (id)_timestampDataForWritingToFile;	// IMP=0x001000000005313c
- (void)writeTimestampsToFile;	// IMP=0x0010000000053053
- (void)readTimestampsFromFile;	// IMP=0x0010000000052f69
- (void)_removePromptTimestampsOutsideIntervalEnding:(id)arg1;	// IMP=0x0010000000052d33
- (id)_now;	// IMP=0x0010000000052cf0
- (void)recordNewPrompt;	// IMP=0x0010000000052c44
- (_Bool)isPromptAllowedRightNow;	// IMP=0x0010000000052ba8
- (id)init;	// IMP=0x0010000000052b0a

@end
