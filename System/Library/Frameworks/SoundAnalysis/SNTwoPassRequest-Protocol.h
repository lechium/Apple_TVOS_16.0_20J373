//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SoundAnalysis/SNRequest-Protocol.h>

@class SNTwoPassConfiguration;
@protocol SNSecondPassController;

@protocol SNTwoPassRequest <SNRequest>
@property(readonly) SNTwoPassConfiguration *twoPassConfiguration;
- (id <SNSecondPassController>)createSecondPassController;
@end

