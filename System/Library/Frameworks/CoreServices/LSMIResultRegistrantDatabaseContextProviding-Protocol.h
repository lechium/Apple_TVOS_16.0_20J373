//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreServices/NSObject-Protocol.h>

@protocol LSMIResultRegistrantDatabaseContext;

@protocol LSMIResultRegistrantDatabaseContextProviding <NSObject>
- (void)armSaveTimerIfNecessary:(void (^)(_Bool, id <LSMIResultRegistrantDatabaseContext>, NSError *))arg1;
- (id <LSMIResultRegistrantDatabaseContext>)databaseContextWithError:(id *)arg1;
@end

