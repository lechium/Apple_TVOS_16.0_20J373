//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CPLFeedbackMessage.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CPLResetFeedbackMessage : CPLFeedbackMessage
{
    NSString *_resetType;	// 8 = 0x8
    NSString *_reason;	// 16 = 0x10
    NSString *_uuid;	// 24 = 0x18
}

+ (id)feedbackType;	// IMP=0x0060000000065562
- (void).cxx_destruct;	// IMP=0x0000000000065520
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) NSString *resetType; // @synthesize resetType=_resetType;
- (id)serverMessage;	// IMP=0x0000000000065375
- (id)initWithResetType:(id)arg1 reason:(id)arg2 uuid:(id)arg3 libraryIdentifier:(id)arg4;	// IMP=0x0000000000065276

@end

