//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class CLPlacemark, INDateComponentsRange, NSArray, NSString;

@protocol INCreateEventIntentExport <NSObject, JSExport>
@property(copy, nonatomic) CLPlacemark *location;
@property(copy, nonatomic) NSArray *participants;
@property(copy, nonatomic) INDateComponentsRange *dateTimeRange;
@property(copy, nonatomic) NSString *title;
- (id)init;
@end

