//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CADNotificationUtilities : NSObject
{
}

+ (id)_stringForNotificationType:(int)arg1;	// IMP=0x00800000000396ac
+ (_Bool)_storeIsDelegate:(const void *)arg1;	// IMP=0x0080000000039681
+ (void)_logNotificationCountsForNotifications:(id)arg1;	// IMP=0x00800000000392cc
+ (id)flattenedNotificationsFromNotifications:(id)arg1 expanded:(_Bool)arg2;	// IMP=0x0080000000039048
+ (_Bool)storeIsReadOnlyDelegate:(const void *)arg1;	// IMP=0x0080000000039019
+ (int)_gatherSuggestionResourceChangeNotification:(const void *)arg1 withContext:(id)arg2 database:(struct CalDatabase *)arg3 databaseID:(int)arg4;	// IMP=0x008000000003838f
+ (int)_gatherSharedCalendarResourceChangeNotification:(const void *)arg1 withContext:(id)arg2 database:(struct CalDatabase *)arg3 databaseID:(int)arg4;	// IMP=0x00800000000378f9
+ (int)_gatherSharedCalendarInviteReplyNotification:(const void *)arg1 withContext:(id)arg2 database:(struct CalDatabase *)arg3 databaseID:(int)arg4;	// IMP=0x008000000003741b
+ (int)_gatherSharedCalendarResponsesAndResourceChangesWithContext:(id)arg1;	// IMP=0x0080000000037066
+ (int)_gatherSharedCalendarInvitationsWithContext:(id)arg1;	// IMP=0x0080000000036bfa
+ (int)_gatherEventInvitationsAndRepliesWithContext:(id)arg1;	// IMP=0x0080000000035b7d
+ (int)CADDatabaseGetEventNotificationItemsWithConnection:(id)arg1 afterDate:(id)arg2 forSourceWithExternalIdentifier:(id)arg3 excludingDelegateSources:(_Bool)arg4 excludingUncheckedCalendars:(_Bool)arg5 filteredByShowsNotificationsFlag:(_Bool)arg6 expanded:(_Bool)arg7 earliestExpirationDate:(id *)arg8 notificationTypes:(id *)arg9 objectIDs:(id *)arg10 occurrenceDates:(id *)arg11 attendeeObjectIDs:(id *)arg12;	// IMP=0x00800000000358cf
+ (id)_attendeeObjectIDsFromNotifications:(id)arg1;	// IMP=0x0080000000035739
+ (id)_occurrenceDatesFromNotifications:(id)arg1;	// IMP=0x00800000000355fa
+ (id)_objectIDsFromNotifications:(id)arg1;	// IMP=0x00800000000354cf
+ (id)_notificationTypesFromNotifications:(id)arg1;	// IMP=0x008000000003538e

@end
