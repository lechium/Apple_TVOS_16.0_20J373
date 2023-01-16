//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AccessibilityAudit/AXAuditService.h>

@interface XADAuditServer : AXAuditService
{
    _Bool __handelingScreenChanged;	// 8 = 0x8
    long long __screenChangeHandleAttempts;	// 16 = 0x10
}

+ (Class)deviceSettingsManagerClass;	// IMP=0x0020000000009c86
@property(nonatomic) long long _screenChangeHandleAttempts; // @synthesize _screenChangeHandleAttempts=__screenChangeHandleAttempts;
@property(nonatomic) _Bool _handelingScreenChanged; // @synthesize _handelingScreenChanged=__handelingScreenChanged;
- (void)eventManager:(id)arg1 notificationReceived:(int)arg2 humanReadable:(id)arg3;	// IMP=0x001000000000cc9e
- (void)didReceiveAccessibilityNotification:(int)arg1;	// IMP=0x001000000000cb61
- (void)_handleScreenChangedNotification;	// IMP=0x001000000000c964
- (void)_handleLayoutChangedNotification;	// IMP=0x001000000000c898
- (void)eventManager:(id)arg1 eventToHighlightPoint:(struct CGPoint)arg2;	// IMP=0x001000000000c77b
- (void)eventManager:(id)arg1 stoppedSnarfingEvents:(_Bool)arg2;	// IMP=0x001000000000c684
- (void)deviceDidGetTargeted;	// IMP=0x001000000000c571
- (id)deviceFetchElementAtNormalizedDeviceCoordinate:(id)arg1;	// IMP=0x001000000000c371
- (id)deviceFetchResolvesElementsOnSimulator;	// IMP=0x001000000000c22d
- (id)deviceFetchSpecialElement:(id)arg1;	// IMP=0x001000000000c04b
- (void)eventManager:(id)arg1 systemFocusDidMoveToElement:(id)arg2;	// IMP=0x001000000000bf24
- (void)deviceElement:(id)arg1 setValue:(id)arg2 attribute:(id)arg3;	// IMP=0x001000000000bf1e
- (id)deviceElement:(id)arg1 valueForParameterizedAttribute:(id)arg2 withObject:(id)arg3;	// IMP=0x001000000000bb27
- (id)deviceElement:(id)arg1 valueForAttribute:(id)arg2;	// IMP=0x001000000000b7ef
- (id)deviceElement:(id)arg1 performAction:(id)arg2 withValue:(id)arg3;	// IMP=0x001000000000b4d4
- (void)inspectorManager:(id)arg1 inspectorFocusDidChange:(id)arg2;	// IMP=0x001000000000b39d
- (void)inspectorManager:(id)arg1 inspectorElementPropertiesChanged:(id)arg2;	// IMP=0x001000000000b266
- (void)inspectorManager:(id)arg1 inspectorMonitoredEventTypeChanged:(unsigned long long)arg2;	// IMP=0x001000000000b1ab
- (id)deviceInspectorCanNavWhileMonitoringEvents;	// IMP=0x001000000000b19e
- (id)deviceInspectorSupportedEventTypes;	// IMP=0x001000000000b191
- (void)deviceInspectorLockOnCurrentElement;	// IMP=0x001000000000b0b3
- (void)deviceInspectorShowVisuals:(id)arg1;	// IMP=0x001000000000af06
- (void)deviceInspectorSetMonitoredEventType:(id)arg1;	// IMP=0x001000000000ae00
- (void)deviceInspectorPreviewOnElement:(id)arg1;	// IMP=0x001000000000ac7a
- (void)deviceInspectorMoveWithOptions:(id)arg1;	// IMP=0x001000000000aa6b
- (void)deviceInspectorFocusOnElement:(id)arg1;	// IMP=0x001000000000a8e5
- (void)highlightElements:(id)arg1;	// IMP=0x001000000000a6cc
- (void)highlightElement:(id)arg1;	// IMP=0x001000000000a626
- (void)auditCategorySetup;	// IMP=0x001000000000a620
- (id)_deviceCaptureScreenshot;	// IMP=0x001000000000a580
- (void)connectionInterrupted;	// IMP=0x001000000000a4d4
- (id)deviceCaptureScreenshot;	// IMP=0x001000000000a3d8
- (id)synchronousDeviceCaptureScreenshot;	// IMP=0x001000000000a3c6
- (void)setApplicationStateNotificationsEnabled:(_Bool)arg1;	// IMP=0x001000000000a24b
- (void)_appStateChanged:(id)arg1;	// IMP=0x0010000000009d17
- (id)initWithTransport:(id)arg1;	// IMP=0x0010000000009c97

@end

