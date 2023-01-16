//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MRExpanseManager;

@protocol MRExpanseManagerObserver <NSObject>

@optional
- (void)expanseManagerDidLeaveExpanseSession:(MRExpanseManager *)arg1;
- (void)expanseManagerDidJoinExpanseSession:(MRExpanseManager *)arg1;
- (void)expanseManagerTelevisionDidLeaveSession:(MRExpanseManager *)arg1;
- (void)expanseManagerTelevisionDidJoinSession:(MRExpanseManager *)arg1;
@end

