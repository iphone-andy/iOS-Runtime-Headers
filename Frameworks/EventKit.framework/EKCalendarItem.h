/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKAttendee, EKCalendar, EKCalendarItem, EKOrganizer, EKStructuredLocation, NSArray, NSDate, NSString, NSTimeZone, NSURL;

@interface EKCalendarItem : EKObject {
    int _actionsStateCachedValue;
    bool_haveCachedActionsState;
}

@property(copy) NSURL * URL;
@property(readonly) NSString * UUID;
@property(copy) NSURL * action;
@property(readonly) int actionsState;
@property(copy) NSArray * alarms;
@property(copy) NSArray * allAlarms;
@property(getter=isAllDay) bool allDay;
@property(readonly) bool allowsAlarmModifications;
@property(readonly) bool allowsAttendeeModifications;
@property(readonly) bool allowsCalendarModifications;
@property(readonly) bool allowsRecurrenceModifications;
@property(readonly) NSArray * attachments;
@property(readonly) NSArray * attendees;
@property(retain) EKCalendar * calendar;
@property(readonly) NSString * calendarItemExternalIdentifier;
@property(readonly) NSString * calendarItemIdentifier;
@property NSString * calendarScale;
@property(readonly) NSDate * creationDate;
@property(getter=isDefaultAlarmRemoved) bool defaultAlarmRemoved;
@property(copy) NSTimeZone * endTimeZone;
@property(copy) NSString * externalID;
@property(copy) NSString * externalModificationTag;
@property(readonly) NSURL * externalURI;
@property(readonly) bool hasAlarms;
@property(readonly) bool hasAttendees;
@property(readonly) bool hasNotes;
@property(readonly) bool hasRecurrenceRules;
@property(readonly) bool isEditable;
@property(readonly) bool isExternallyOrganizedInvitation;
@property(readonly) bool isFloating;
@property(readonly) bool isOrganizedBySharedCalendarOwner;
@property(readonly) bool isSelfOrganized;
@property(readonly) bool isSelfOrganizedInvitation;
@property(readonly) NSDate * lastModifiedDate;
@property(copy) NSString * location;
@property(copy) NSString * notes;
@property(retain) EKOrganizer * organizer;
@property(retain,readonly) EKCalendarItem * originalItem;
@property long long priority;
@property(copy) NSArray * recurrenceRules;
@property(readonly) bool requiresDetach;
@property(retain) EKAttendee * selfAttendee;
@property(readonly) int selfParticipantStatus;
@property(copy) NSString * sharedItemCreatedByDisplayName;
@property(copy) NSString * sharedItemCreatedByEmailAddress;
@property(copy) NSString * sharedItemCreatedByFirstName;
@property(copy) NSString * sharedItemCreatedByLastName;
@property(copy) NSDate * sharedItemCreatedDate;
@property(copy) NSTimeZone * sharedItemCreatedTimeZone;
@property(copy) NSString * sharedItemModifiedByDisplayName;
@property(copy) NSString * sharedItemModifiedByEmailAddress;
@property(copy) NSString * sharedItemModifiedByFirstName;
@property(copy) NSString * sharedItemModifiedByLastName;
@property(copy) NSDate * sharedItemModifiedDate;
@property(copy) NSTimeZone * sharedItemModifiedTimeZone;
@property(copy) EKStructuredLocation * startLocation;
@property(copy) NSTimeZone * startTimeZone;
@property(copy) EKStructuredLocation * structuredLocation;
@property(copy) NSTimeZone * timeZone;
@property(copy) NSString * title;

- (id)URL;
- (id)UUID;
- (id)_alarmsRelation;
- (id)_attachmentsRelation;
- (id)_attendeesRelation;
- (id)_locationRelation;
- (void)_moveToCalendarInternal:(id)arg1;
- (id)_organizerRelation;
- (id)_persistentItem;
- (id)_recurrencesRelation;
- (id)_selfAttendeeRelation;
- (id)_startLocationRelation;
- (id)action;
- (int)actionsState;
- (void)addAlarm:(id)arg1;
- (void)addAttendee:(id)arg1;
- (void)addRecurrenceRule:(id)arg1;
- (id)alarms;
- (id)allAlarms;
- (bool)allowsAlarmModifications;
- (bool)allowsAttendeeModifications;
- (bool)allowsCalendarModifications;
- (bool)allowsRecurrenceModifications;
- (id)attachments;
- (id)attendees;
- (id)calendar;
- (id)calendarItemExternalIdentifier;
- (id)calendarItemIdentifier;
- (id)calendarScale;
- (bool)canMoveToCalendar:(id)arg1 fromCalendar:(id)arg2 error:(id*)arg3;
- (id)creationDate;
- (id)description;
- (id)endTimeZone;
- (id)externalID;
- (id)externalModificationTag;
- (id)externalURI;
- (id)findOriginalAlarmStartingWith:(id)arg1;
- (bool)hasAlarms;
- (bool)hasAttendees;
- (bool)hasNotes;
- (bool)hasRecurrenceRules;
- (bool)isAlarmAcknowledgedPropertyDirty;
- (bool)isAllDay;
- (bool)isDefaultAlarmRemoved;
- (bool)isEditable;
- (bool)isExternallyOrganizedInvitation;
- (bool)isFloating;
- (bool)isOrganizedBySharedCalendarOwner;
- (bool)isSelfOrganized;
- (bool)isSelfOrganizedInvitation;
- (id)lastModifiedDate;
- (id)lazyLoadRelationForKey:(id)arg1;
- (id)location;
- (void)moveToCalendar:(id)arg1;
- (id)notes;
- (id)organizer;
- (id)originalItem;
- (long long)priority;
- (bool)rebase;
- (id)recurrenceRules;
- (void)removeAcknowledgedSnoozedAlarms;
- (void)removeAlarm:(id)arg1;
- (void)removeAllSnoozedAlarms;
- (void)removeAttendee:(id)arg1;
- (void)removeRecurrenceRule:(id)arg1;
- (bool)requiresDetach;
- (id)selfAttendee;
- (int)selfParticipantStatus;
- (void)setAction:(id)arg1;
- (void)setAlarms:(id)arg1;
- (void)setAllAlarms:(id)arg1;
- (void)setAllDay:(bool)arg1;
- (void)setAttendees:(id)arg1;
- (void)setCalendar:(id)arg1;
- (void)setCalendarScale:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDefaultAlarmRemoved:(bool)arg1;
- (void)setEndTimeZone:(id)arg1;
- (void)setExternalID:(id)arg1;
- (void)setExternalModificationTag:(id)arg1;
- (void)setLastModifiedDate:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setNotes:(id)arg1;
- (void)setOrganizer:(id)arg1;
- (void)setPriority:(long long)arg1;
- (void)setRecurrenceRules:(id)arg1;
- (void)setSharedItemCreatedByAddress:(id)arg1;
- (void)setSharedItemCreatedByDisplayName:(id)arg1;
- (void)setSharedItemCreatedByFirstName:(id)arg1;
- (void)setSharedItemCreatedByLastName:(id)arg1;
- (void)setSharedItemCreatedDate:(id)arg1;
- (void)setSharedItemCreatedTimeZone:(id)arg1;
- (void)setSharedItemModifiedByDisplayName:(id)arg1;
- (void)setSharedItemModifiedByEmailAddress:(id)arg1;
- (void)setSharedItemModifiedByFirstName:(id)arg1;
- (void)setSharedItemModifiedByLastName:(id)arg1;
- (void)setSharedItemModifiedDate:(id)arg1;
- (void)setSharedItemModifiedTimeZone:(id)arg1;
- (void)setStartLocation:(id)arg1;
- (void)setStartTimeZone:(id)arg1;
- (void)setStructuredLocation:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setURL:(id)arg1;
- (id)sharedItemCreatedByDisplayName;
- (id)sharedItemCreatedByEmailAddress;
- (id)sharedItemCreatedByFirstName;
- (id)sharedItemCreatedByLastName;
- (id)sharedItemCreatedDate;
- (id)sharedItemCreatedTimeZone;
- (id)sharedItemModifiedByDisplayName;
- (id)sharedItemModifiedByEmailAddress;
- (id)sharedItemModifiedByFirstName;
- (id)sharedItemModifiedByLastName;
- (id)sharedItemModifiedDate;
- (id)sharedItemModifiedTimeZone;
- (void)snoozeAlarm:(id)arg1 withLocation:(id)arg2 proximity:(long long)arg3;
- (void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2;
- (id)startDateForRecurrence;
- (id)startLocation;
- (id)startTimeZone;
- (id)structuredLocation;
- (id)timeZone;
- (id)title;
- (void)updatePersistentObject;
- (void)updatePersistentObjectSkippingProperties:(id)arg1;
- (bool)validate:(id*)arg1;

@end
