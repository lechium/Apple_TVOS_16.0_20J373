//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CADObjectID, CalGrantedDelegate, NSArray, NSDate, NSString;

@protocol CADSourceInterface
- (void)CADSourceRemoveExchangeDelegateWithID:(CADObjectID *)arg1 reply:(void (^)(int))arg2;
- (void)CADSourceAddExchangeDelegateWithName:(NSString *)arg1 emailAddress:(NSString *)arg2 toSourceWithID:(CADObjectID *)arg3 reply:(void (^)(int, CADObjectID *, long long))arg4;
- (void)CADSourceUpdateGrantedDelegate:(CalGrantedDelegate *)arg1 action:(long long)arg2 sourceID:(CADObjectID *)arg3 reply:(void (^)(int))arg4;
- (void)CADSourceGetGrantedDelegatesList:(CADObjectID *)arg1 reply:(void (^)(int, NSArray *))arg2;
- (void)CADRemoveCalendarItemsOlderThanDate:(NSDate *)arg1 ofType:(int)arg2 inSource:(CADObjectID *)arg3 reply:(void (^)(int))arg4;
- (void)CADCountCalendarItemsOfType:(int)arg1 inSource:(CADObjectID *)arg2 reply:(void (^)(int, unsigned long long))arg3;
- (void)CADSourceRefresh:(CADObjectID *)arg1 isUserRequested:(_Bool)arg2 reply:(void (^)(int, _Bool))arg3;
- (void)CADSourceGetNotificationCollection:(CADObjectID *)arg1 reply:(void (^)(int, CADObjectID *))arg2;
- (void)CADSourceGetConstraints:(CADObjectID *)arg1 reply:(void (^)(int, NSData *))arg2;
- (void)CADDatabaseGetLocalBirthdaySource:(void (^)(int, CADObjectID *))arg1;
- (void)CADDatabaseGetLocalSourceWithEnableIfNeeded:(_Bool)arg1 reply:(void (^)(int, CADObjectID *))arg2;
- (void)CADDatabaseGetSourcesWithFaultedProperties:(NSArray *)arg1 reply:(void (^)(int, NSArray *, NSArray *))arg2;
@end

