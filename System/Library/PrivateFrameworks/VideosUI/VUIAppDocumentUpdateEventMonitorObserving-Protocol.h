//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class VUIAppDocumentUpdateEvent;

@protocol VUIAppDocumentUpdateEventMonitorObserving <NSObject>
- (void)appDocumentHasBecomeActive;
- (void)appDocumentDidReceiveEvent:(VUIAppDocumentUpdateEvent *)arg1;
@end

