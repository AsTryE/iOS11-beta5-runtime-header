/* Generated by RuntimeBrowser.
 */

@protocol MNAnnoucementStrategy

@required

- (MNAnnouncementPlanEvent *)nextEvent;
- (MNAnnouncementPlan *)plan;
- (void)planForEvents:(NSArray *)arg1 distance:(double)arg2 speed:(double)arg3 previousEvent:(MNAnnouncementPlanEvent *)arg4 timeSinceLastEvent:(double)arg5;

@end
