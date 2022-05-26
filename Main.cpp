
#include "Graph.h"
#include "Node.h"
#include "Edge.h"

#include <iostream>
#include <string>
#include <set>

using namespace std;

int main (){

//creating graph
shared_ptr<Graph> storyGraph (new Graph);

//creating nodes 

shared_ptr<Node> intro (new Node ("intro"));
shared_ptr<Node> start (new Node ("start"));
shared_ptr<Node> l_advice (new Node ("l_advice"));
shared_ptr<Node> arrival (new Node ("arrival"));
shared_ptr<Node> hear_cry (new Node ("hear_cry"));
shared_ptr<Node> investigate (new Node ("investigate"));
shared_ptr<Node> front_hall (new Node ("front_hall"));
shared_ptr<Node> library (new Node ("library"));
shared_ptr<Node> play_1 (new Node ("playroom_1"));
shared_ptr<Node> play_2 (new Node ("playroom_2"));
shared_ptr<Node> journal (new Node ("journal"));
shared_ptr<Node> outside (new Node ("outside_end"));
shared_ptr<Node> stay_par (new Node ("stay_parlor"));
shared_ptr<Node> par_1 (new Node ("parlor_1"));
shared_ptr<Node> par_2 (new Node ("parlor_2"));
shared_ptr<Node> par_3 (new Node ("parlor_3"));
shared_ptr<Node> par_4 (new Node ("parlor_4"));
shared_ptr<Node> par_5 (new Node ("parlor_5"));
shared_ptr<Node> par_6 (new Node ("parlor_6"));
shared_ptr<Node> bed_leave (new Node ("bedroom_leave"));
shared_ptr<Node> bed_1 (new Node ("bedroom_1"));
shared_ptr<Node> bed_2 (new Node ("bedroom_2"));
shared_ptr<Node> jattic_1 (new Node ("jattic_1"));
shared_ptr<Node> jattic_2 (new Node ("jattic_2"));
shared_ptr<Node> jattic_3 (new Node ("jattic_3"));
shared_ptr<Node> jattic_4 (new Node ("jattic_4"));
shared_ptr<Node> maid_esc (new Node ("maid_escape"));
shared_ptr<Node> cattic_1 (new Node ("cattic_1"));
shared_ptr<Node> cattic_2 (new Node ("cattic_2"));
shared_ptr<Node> cattic_3 (new Node ("cattic_3"));
shared_ptr<Node> attic_end (new Node ("attic_end"));
shared_ptr<Node> quit (new Node ("quit"));


//creating edges 

shared_ptr<Edge> in_st (new Edge (intro, start));
in_st->setWeight (0);
intro->edges ++;
shared_ptr<Edge> st_ar (new Edge (start, arrival));
st_ar->setWeight(1);
start->edges ++;
shared_ptr<Edge> st_la (new Edge (start, l_advice));
st_la->setWeight (2);
start->edges ++;
shared_ptr<Edge> la_ar (new Edge (l_advice, arrival));
la_ar->setWeight (0);
l_advice->edges ++;
shared_ptr<Edge> ar_hc (new Edge (arrival, hear_cry));
ar_hc->setWeight (0);
arrival->edges ++;
shared_ptr<Edge> hc_in (new Edge (hear_cry, investigate));
hc_in->setWeight (0);
hear_cry->edges ++;
shared_ptr<Edge> in_sp (new Edge (investigate, stay_par));
in_sp->setWeight(1);
investigate->edges ++;
shared_ptr<Edge> in_fh (new Edge (investigate, front_hall));
in_fh->setWeight (2);
investigate->edges ++;
shared_ptr<Edge> sp_p1 (new Edge (stay_par, par_1));
sp_p1->setWeight(0);
stay_par->edges ++;
shared_ptr<Edge> p1_p2 (new Edge (par_1, par_2));
p1_p2->setWeight (0);
par_1->edges ++;
shared_ptr<Edge> p2_p3 (new Edge (par_2, par_3));
p2_p3->setWeight (1);
par_2->edges ++;
shared_ptr<Edge> p2_p4 (new Edge (par_2, par_4));
p2_p4->setWeight(2);
par_2->edges ++;
shared_ptr<Edge> p3_bl (new Edge (par_3, bed_leave));
p3_bl->setWeight(0);
par_3->edges ++;
shared_ptr<Edge> fh_li (new Edge (front_hall, library));
fh_li->setWeight(2);
front_hall->edges ++;
shared_ptr<Edge> li_jo (new Edge (library, journal));
li_jo->setWeight (2);
library->edges ++;
shared_ptr<Edge> li_sp (new Edge (library, stay_par));
li_sp->setWeight (1);
library->edges ++;
shared_ptr<Edge> jo_p1 (new Edge (journal, par_1));
jo_p1->setWeight(2);
journal->edges ++;
shared_ptr<Edge> fh_pl1 (new Edge (front_hall, play_1));
fh_pl1->setWeight (3);
front_hall->edges ++;
shared_ptr<Edge> pl1_pl2 (new Edge (play_1, play_2));
pl1_pl2->setWeight(0);
play_1->edges ++;
shared_ptr<Edge> pl2_p5 (new Edge (play_2, par_5));
pl2_p5->setWeight(0);
play_2->edges ++;
shared_ptr<Edge> p5_p4 (new Edge (par_5, par_4));
p5_p4->setWeight (2);
par_5->edges ++;
shared_ptr<Edge> p5_out (new Edge (par_5, outside));
p5_out->setWeight (3);
par_5->edges ++;
shared_ptr<Edge> p4_p6 (new Edge (par_4, par_6));
p4_p6->setWeight(1);
par_4->edges++;
shared_ptr<Edge> p6_bl (new Edge (par_6, bed_leave));
p6_bl->setWeight(0);
par_6->edges ++;
shared_ptr<Edge> p4_bed1 (new Edge (par_4, bed_1));
p4_bed1->setWeight (2);
par_4->edges ++;
shared_ptr<Edge> bed1_bl (new Edge (bed_1, bed_leave));
bed1_bl->setWeight (1);
bed_1->edges ++;
shared_ptr<Edge> p4_bed2 (new Edge (par_4, bed_2));
p4_bed2->setWeight(3);
par_4->edges++;
shared_ptr<Edge> bed1_ja1 (new Edge (bed_1, jattic_1));
bed1_ja1->setWeight(2);
bed_1->edges ++;
shared_ptr<Edge> ja1_ja2(new Edge (jattic_1, jattic_2));
ja1_ja2->setWeight(0);
jattic_1->edges++;
shared_ptr<Edge> ja2_ja3 (new Edge (jattic_2, jattic_3));
ja2_ja3->setWeight(0);
jattic_2->edges ++;
shared_ptr<Edge> ja3_ja4 (new Edge (jattic_3, jattic_4));
ja3_ja4->setWeight(0);
jattic_3->edges ++;
shared_ptr<Edge> ja4_me (new Edge (jattic_4, maid_esc));
ja4_me->setWeight(0);
jattic_4->edges ++;
shared_ptr<Edge> bed2_out (new Edge (bed_2, outside));
bed2_out->setWeight(1);
bed_2->edges ++;
shared_ptr<Edge> bed2_ca1 (new Edge (bed_2, cattic_1));
bed2_ca1->setWeight(3);
bed_2->edges ++;
shared_ptr<Edge> ca1_ca2 (new Edge (cattic_1, cattic_2));
ca1_ca2->setWeight(0);
cattic_1->edges ++;
shared_ptr<Edge> ca2_ca3 (new Edge (cattic_2, cattic_3));
ca2_ca3->setWeight(0);
cattic_2->edges ++;
shared_ptr<Edge> ca3_aend (new Edge (cattic_3, attic_end));
ca3_aend->setWeight(0);
cattic_3->edges ++;


//add all nodes and edges to graph

storyGraph->addNode (intro);
storyGraph->setSource (intro);
storyGraph->addNode (start);
storyGraph->addNode (l_advice);
storyGraph->addNode (arrival);
storyGraph->addNode (hear_cry);
storyGraph->addNode (investigate);
storyGraph->addNode (front_hall);
storyGraph->addNode (library);
storyGraph->addNode (play_1);
storyGraph->addNode (play_2);
storyGraph->addNode (journal);
storyGraph->addNode (outside);
storyGraph->addNode (stay_par);
storyGraph->addNode (par_1);
storyGraph->addNode (par_2);
storyGraph->addNode (par_3);
storyGraph->addNode (par_4);
storyGraph->addNode (par_5);
storyGraph->addNode (par_6);
storyGraph->addNode (bed_leave);
storyGraph->addNode (bed_1);
storyGraph->addNode (bed_2);
storyGraph->addNode (jattic_1);
storyGraph->addNode (jattic_2);
storyGraph->addNode (jattic_3);
storyGraph->addNode (jattic_4);
storyGraph->addNode (maid_esc);
storyGraph->addNode (cattic_1);
storyGraph->addNode (cattic_2);
storyGraph->addNode (cattic_3);
storyGraph->addNode (attic_end);
storyGraph->addNode (quit);

storyGraph->addEdge (in_st);
storyGraph->addEdge (st_ar);
storyGraph->addEdge (st_la);
storyGraph->addEdge (la_ar);
storyGraph->addEdge (ar_hc);
storyGraph->addEdge (hc_in);
storyGraph->addEdge (in_sp);
storyGraph->addEdge (in_fh);
storyGraph->addEdge (sp_p1);
storyGraph->addEdge (p1_p2);
storyGraph->addEdge (p2_p3);
storyGraph->addEdge (p2_p4);
storyGraph->addEdge (p3_bl);
storyGraph->addEdge (fh_li);
storyGraph->addEdge (li_jo);
storyGraph->addEdge (li_sp);
storyGraph->addEdge (jo_p1);
storyGraph->addEdge (fh_pl1);
storyGraph->addEdge (pl1_pl2);
storyGraph->addEdge (pl2_p5);
storyGraph->addEdge (p5_p4);
storyGraph->addEdge (p5_out);
storyGraph->addEdge (p4_p6);
storyGraph->addEdge (p6_bl);
storyGraph->addEdge (p4_bed1);
storyGraph->addEdge (bed1_bl);
storyGraph->addEdge (p4_bed2);
storyGraph->addEdge (bed1_ja1);
storyGraph->addEdge (ja1_ja2);
storyGraph->addEdge (ja2_ja3);
storyGraph->addEdge (ja3_ja4);
storyGraph->addEdge (ja4_me);
storyGraph->addEdge (bed2_out);
storyGraph->addEdge (bed2_ca1);
storyGraph->addEdge (ca1_ca2);
storyGraph->addEdge (ca2_ca3);
storyGraph->addEdge (ca3_aend);

//add edges to quit node
storyGraph->quitNode(quit);

//filling out each node
//statevar values:
//stay_par: statevar = 1
//journal: statevar = 2
//playroom: statevar = 3



intro->achoice = 0;
intro->bchoice = 9;
intro->text = "Instructions:\n\nAfter reading each section of story, make your choice by pressing ‘a’ or ‘b’ on your keyboard—but choose carefully, there’s no going back!  Press ‘q’ at any time to quit.  Good luck!\n\na. Begin \nb.  Quit";

start->achoice = 2;
start->bchoice = 1;
start->text = "\tSalem, Kansas\n\tOctober, 1931\n\n\tThe taxi rattles along the dirt road.  Behind you, the lights of Salem recede into the dusky purple of twilight until it feels like you’re surrounded on all sides by the towering stalks filling the cornfields.  You check to make sure your briefcase is still at your feet.  This is the furthest you’ve been from Kansas City before, and after your train was delayed you’ll have to spend the night at Blackwood Farm.\n\tThe gray-haired taxi driver turns back you, raising his voice over the noise of the old engine.\n\t“What did you say you were doing at Blackwood?”\n\t“I work for the estate office.  I need Elizabeth Blackwood to sign the sales agreement,” you reply.\n\t“So she really is selling?”\n\t“Yes.”\n\t“I’m surprised anyone would want it,” he says, shaking his head.\n\t“It’s valuable farmland, even out here,” you say.\n\t“Nobody here would come within a mile of the place if we could avoid it, especially not at night,” the taxi driver says.  “If you hadn’t offered to pay me as much as you did, I wouldn’t have driven you out here.  As it is you can bet I’ll be hightailing it home as soon as I can.”\n\tYou frown at this.  It’s true you had to talk him in to driving you out to the farm after your train finally pulled in to Salem station, and he’s been making a number of disagreeable comments hinting at how he finds this trip unpleasant.  You wish he would simply stop talking and leave you in peace for the rest of the drive.\n\t“You want a bit of advice?” he asks.\n\nChoice:\na.  “Alright,” you sigh.  You have the feeling he’ll tell you no matter what you say.\n\nb.  “That’s alright,” you say.  You’re tired of his attitude and worried he’s trying to scare you since you’re an outsider here.";

l_advice->achoice = 0;
l_advice->bchoice = 9;
l_advice->text = "\t“There’s a lot of strange stories about that house, and that family.  My grandmother used to work there as a maid, and she always told me that if I ever find myself there I should keep my head down and keep to myself, no matter what I might hear,” he says.\n\t“What you might here?” you ask.\n\t“Aye that’s what she said.  There were a number of strange noises, especially after the sun set, she said.  Better to ignore them.”\n\t“I’ll remember that,” you say.\n\nContinue?\na. Yes\n\nb. No";

arrival->achoice = 0;
arrival->bchoice = 9;
arrival->text = "\tYou turn your head to look out the window, at the darkening cornfields whizzing by.  You start to feel a bit drowsy when you notice the taxi is finally slowing down, and then the driver turns into the long dirt driveway leading to Blackwood Farm.\n\tThe farmhouse looms against the horizon, much bigger than you’d expected with three stories and a peaked roof.  Although it is large, it is also somewhat dilapidated—the weathered white paint is peeling and the broad front porch is sagging.  True to his word, the taxi driver leaves as soon as you’ve paid him, leaving you standing on the porch with an uncomfortable sense of foreboding.  The house is quiet and dark, and you wonder if there’s been some mistake—it seems as if it’s been abandoned for years, rather than the home of a wealthy spinster looking to sell.\n\tYou gather your courage and knock on the front door.  For a moment, everything is quiet and then you hear a shuffling sound from somewhere within the house.\n\nContinue?\na.  Yes\n\nb.  No";

hear_cry->achoice = 0;
hear_cry->bchoice = 9;
hear_cry->text = "\tFinally the door opens, and you’re surprised to see a young woman with dark hair and a heart-shaped face wearing a maid’s uniform. \n\t“Can I help you?” she asks.\n\t“I’m from the estate agent’s office.  I have papers for Ms Blackwood to sign,” you say.\n\t“Oh,” she says.\n\t“I thought I was expected?  We’ve corresponded by letter,” you say.\n\t“Alright,” she says, and opens the front door wider to beckon you inside.\n\tThe interior of the house is in slightly better shape than outside, although the floorboards are worn and instead of electric lighting, there are gas lamps flickering along the walls.  At least it seems clean, you think.\n\tThe maid leads you through the front hall to a parlor, where a fire is crackling in the fireplace.  \n\t“She’ll be with you in a moment,” she says, then disappears before you can reply.\n\tYou settle on the threadbare settee.  The fire gives the room a cheery feeling, and you want to laugh at your earlier foreboding.  You must have let the taxi driver's words get to you more than you realized.  You open you briefcase to look over the papers one more time, and then freeze when you hear a shriek.\n\tFor a moment everything is quiet, and then it comes again, and you realize that rather than screaming it’s the sound of a child crying—it sounds almost hysterical, with high keening sobs punctuated by small, hiccuping breaths.  The sound is almost tangible, crawling over your skin, and before you’re aware of it you’re on your feet and reaching for the door to the parlor.  You hesitate with your hand on the knob.\n\nContinue?\na.  Yes\n\nb.  No";

investigate->achoice = 1;
investigate->bchoice = 2;
investigate->text = "\tThe cries echo through the house, but everything else is quiet—it doesn’t sound like anyone is coming to investigate, or help.  Your hand hovers over the knob as you weigh your options.\n\nChoice:\na.  Whatever’s happening in the house isn’t your business, unless it has to do with Elizabeth Blackwood signing the papers.  Children cry all the time; this one’s probably just looking for attention.\n\nb.  It sounds as if there’s a child in serious distress, and you can’t just ignore it on the advice on a superstitious taxi driver.  You’ll just step out and see if anything is amiss before returning to the parlor.";

front_hall->achoice = 2;
front_hall->bchoice = 3;
front_hall->text = "\tYou step out into the dark front hall, where the gas lamps give off an eerie, unsteady light.  Out here it sounds like the cries are coming from everywhere.  You hesitate, listening.\n\nChoice:\na.  After a moment you turn to right and head towards a door that is slightly ajar.  You can just make out the light of a lamp from within.\n\nb.  After a moment you turn to the left, where you’re almost positive the sound is coming from.  There’s a door that’s shut, and as you get closer you can see what looks like a faded daisy painted on the wood just over the knob.";

library->achoice = 1;
library->bchoice = 2;
library->text = "\tYou find yourself in a small library that smells like dust.  Dark shelves line the walls almost up to the ceiling, and against the far wall is a desk with a single lamp burning on it.  Glancing around, you walk to the desk, where you find half of a tattered, leather-bound book with word Journal in faded gold lettering embossed on the cover.  You reach for it, then hesitate.  Something about the book causes goosebumps to ripple over your skin.\n\nChoice:\na.  You told yourself you were just going see if anything was amiss, and reading must be a private journal is clearly going above and beyond that.  Besides, something about this book seems strange to you.  After a moment, you step back and head for the door, intent on ignoring the sounds of the child and returning to the parlor.\n\nb.Something about this half-book seems peculiar to you.  Perhaps you should leave it be, but you’re tired of feeling the strangeness of this house and not knowing what’s going on.  Perhaps this will give you some answers.  After a moment, you step forward and open the cover.";

play_1->achoice = 0;
play_1->bchoice = 0;
play_1->text = "\tThe doorknob is cold in your hand, but it isn’t locked.  You open the door to a dark room and blink a few times as you wait for your eyes to adjust.  You realize you’re in a child’s playroom, with a braided rug in the center of the floor and shelves lined with dolls and stuffed animals.  There’s a small bookcase along one wall, and unlike the rest of the house everything here is covered in dust.  /n/tThe crying is quieter now, more of a whimper.  You leave the door open so that some light from the gas lamps in the front hall illuminate the playroom and step inside.  Your steps leave footprints in the dust, and you wonder how anyone else could be in the room without leaving footprints of their own.  Nevertheless, you continue over to the corner of the room where the bookcase is.  /n/tAs you get closer, you can make out the shape of a small body wedged between the bookcase and the wall.  You stop and crouch down, and see it’s a little boy with curling black hair and hollow eyes, hardly more than five years old.  He sniffs raises his head to look at you. \n\nChoice:\na.  You smile at him.  “Hi,” you say.  You can tell he’s upset and you don’t want him to be afraid of you.\n\nb.  You frown at him.  “What are you doing here?” you ask.  Something about this situation doesn’t feel quite right.";
play_1->statechange = true;
play_1->changevar = 3;

play_2->achoice = 0;
play_2->bchoice = 9;
play_2->text = "\tThe boy sniffs.\n\t“I want my mama,” he says, his voice quiet in the dusty room.\n\t“Where is she?” you ask.\n\t“She’s gone,” he says.  He crawls out toward you and stands, rubbing his tear-stained face with his hands.\n\t“Do you know where she went?” you ask.  You’re starting to get a bad feeling about this.\n\tThe little boy shakes his head.  \n\t“I think she went away,” he says, “but I can’t remember.  Will you help me?”\n\t“Alright,” you say, a little hesitant.  It seems cruel to refuse a child.\n\tThe little boy grins at you and steps forward, slipping his small hand into yours.  You frown; his hand is ice cold.  Before you can say anything else, there’s a noise by the door and the little boy pulls away to hide behind you.\n\tYou turn and see the maid standing in the doorway, a strange expression on her face.\n\t“Oh, sorry, I was just—“ you turn to look back at the boy, and a chill runs down your spine when you see that he’s gone.  You look around the room, but there aren’t many hiding places and yours are the only footprints in the dust.\n\t“I—“ your mouth goes dry.\n\t“You should come back with me.  The mistress is waiting,” the maid says.\n\nContinue?\na.  Yes\n\nb. No";

journal->achoice = 2;
journal->bchoice = 9;
journal->text = "\tThe book falls open to a page in the middle, dated 1836.  The diary belonged to a man named Jacob Blackwood.  He writes about how he has wooed and finally married Mariah, whose father was extremely wealthy and agreed to buy the new couple acres of farmland and build them a house.  Although their life together started out well enough, after living so long in the middle of nowhere Jacob writes that he began to resent Mariah.\n\n\t”March, 1836\n\tI’m so tired of her weeping all the time, and blaming me for things I have no control over.  How was I to know she would miss the city so badly?  If she wanted to stay there so badly, she should have married someone else.  Lately it’s gotten so bad that I can’t even stand to sit across the table as she eats, I hate the way she chews her food.  If it weren’t for the fact that the farm is still in her father’s name, I would get rid of her, I think.”\n\n\tThen, a few months later:\n\n\t”June, 1839\n\tMariah’s pregnant again, and gone even more crazy with it this time than with the first two.  Perhaps if I’m lucky she’ll die in childbirth, and her father will leave the farm to one of the children.”\n\n\tYou take a step back, leaving the diary open in the middle.  You feel as if you’ve witnessed something awful and private, and before you can decide whether or not to keep reading there’s a sound behind you.  You whirl around and find the maid lingering in the doorway.\n\t“I’m sorry,” you blurt out.  “I heard a sound and—“\n\t“She’ll be down shortly.  You’d best return to the parlor,” the maid says.  \n\tYou nod, your cheeks flushed with embarrassment and follow her back across the hall to the parlor.  There’s a tea tray sitting on a side table, and as you return to the settee the maid walks over to it and begins pouring the tea.\n\nContinue?\na.  Yes\n\nb.  No";
journal->statechange = true;
journal->changevar = 2;

outside->text = "\tYou hurry through the house to the front hall, your heartbeat pounding in your ears.  Something is very, very wrong here.  Finally you reach the front door and wrench it open, stepping out into the darkness and rushing down the sagging porch steps.  You start down the drive, your pace increasing until you’re running with your briefcase clutched to your chest.  You don’t care if you have to run the whole six miles back to town, as long as you get out of here.\n\tThe night is cold, the tall stalks of corn oppressive on either side of the road.  You think you hear someone following you, but when you check behind you the road is empty.  As soon as you turn back toward town again you freeze—the little boy is standing in the road in front of you.\n\t“You said you would help me find my mama,” he says, pointing an accusing finger at you.\n\t“I’m sorry,” you say, helpless.  You wonder if you should keep going, or try to placate him.  Ms Blackwood only said bad things happen to those who see the boy, she didn’t say what kind of bad things.\n\t“You didn’t help me,” the boy says.\n\t“I’ll help you now,” you offer, desperate.  The air around you grows colder still, and you feel a sudden pressure building at your back.\n\t“That’s okay,” the boy says, looking over your shoulder.  “Mama’s here now.”\n\tYour blood feels like ice in your veins as you turn slowly.  There’s a woman standing behind you wearing a black dress; it’s too dark to make out her features but something about her reminds you of the maid.  \n\t“Where’s my little boy?” she asks, and her voice rings painfully in your head.  “What have you done with him?”\n\t“I don’t—“ you choke out, and then the figure rushes toward you, all black and shadows.  \n\tThen she falls on you and the very last thing you see before death is her face, pale and terrible.\n";

stay_par->achoice = 0;
stay_par->bchoice = 9;
stay_par->text = "\tYou return to the settee near the fire, and to your papers.  Better to keep your head down and do what you came to do, you think, and abruptly the sound of the crying child ceases.  You glance over the documents without really seeing them, and are startled with the door opens and the maid returns.  She has a tray in her hands with a teapot and a single teacup, and as she sets it on the side table you clear your throat.\n\t“Is everything alright?” you ask.\n\t“Sir?” she asks.\n\t“The child.  Is it alright?”\n\t“What child?” she asks.\n\t“The one that was crying.  I heard it,” you say, a chill running down your spine.\n\t“I didn’t hear anything,” she says, looking puzzled.\n\t“I’m certain I heard a child,” you say.\n\t“Best to ignore it.  There aren’t any children here,” she turns back to the tea tray.\n\t“But—“ you start to speak, and she interrupts you.\n\t“There aren’t any children here, sir,” she says.\n\nContinue?\na.  Yes\n\nb.  No";
stay_par->statechange = true;
stay_par->changevar = 1;

par_1->achoice = 0;
par_1->bchoice = 0;
par_1->text = "\tThe door to the parlor opens again and a woman enters.  She looks to be in her late 40s, her blond hair gone gray at the temples is swept back in a neat bun.  She glances at you, and then frowns at the maid.\n\t“You may leave us,” she tells the maid, and the nods and leaves the room without another word.\n\t“I am Elizabeth Blackwood,” the woman says and you stand to shake her hand and introduce yourself.\n\t“I have the papers for you to sign,” you say, and she nods.\n\t“Thank you for coming all the way out here.  I know it’s a bit out of the way.”\n\t“It’s not problem at all,” you say.  “Only…”\n\t“What is it?” she asks.\n\t“I heard a child crying, earlier.  I asked the maid about it, and she told me there were no children here, but I know what I heard,” you say, beginning to feel foolish.\n\tAt your words, however, Ms Blackwood’s face goes pale.\n\t“What did you say?” her voice is barely more than a whisper.\n\t“Before the maid came back with the tea I heard a child’s crying.  It sounded…upset,” you say.\n\t“No.  Oh no, not now, not again.  We’re so close!” Ms Blackwood turns away from you and covers her face with her hands.\n\t“Is…everything alright?” you ask, suddenly uncomfortable again.\n\t“No.  Yes.  I don’t know,” Ms Blackwood sounds tired.  “Do you believe in curses?”\n\nChoice:\na.“Not really,” you say.  You think again of the taxi driver, and wonder if everyone here is a little too superstitious for their own good.\n\nb.  “I’m not sure,” you say.  “I suppose it’s possible.”  You wonder if the farmhouse and the isolation is starting to get you.";

par_2->achoice = 1;
par_2->bchoice = 2;
par_2->text = "\t“I suppose it doesn’t matter whether you believe in them or not, for I know them to be very real.  Before I say any more, though, I hope that you’ll indulge me and answer this next question truthfully,” Ms Blackwood’s gaze is on you, and you shift in your seat.\n\t“I’ll do my best,” you say.\n\t“Did you see the child?” she asks.\n\t“I thought the maid said—“\n\t“Please just answer my question.  Did you see the child?” she repeats. \n\t“No, I only heard it.”\n\tAt your answer Ms Blackwood sighs and slumps back in her chair.\n\t“Thank the lord for that.  Perhaps I shouldn’t be telling you this, as you’re the one in charge of selling this house and all the land around it, but since you’ve come all the way out here and are now in danger because of it, I feel I must at least give you the opportunity to hear my story.  My family is cursed, you see.”\n\nChoice:\na.“I’m not sure this is any of my business,” you say.  You want nothing more than to have the papers signed, and leave and forget this wretched house.  “I appreciate your concern, but perhaps we should stick to the matter at hand.”\n\nb.“Go on,” you say, uneasy.  You’ve had the feeling since you got here that something wasn’t quite right, and although you’re not certain she’s being honest you at least want to hear what she has to say.";

par_3->achoice = 0;
par_3->bchoice = 9;
par_3->text = "\t“If you’re certain—“ Ms Blackwood says, and you interrupt her.\n\t“I would very much like to finish our business so that I can be on my way in the morning, if it’s alright with you?” you say.  \n\t“Of course,” she agrees.  You pass the estate sale papers to her, and explain over her shoulder what each document is and where she must sign.  She signs each one without asking a single question.  \n\tWhen she is finished, she hands the stack back to you and stands while you slip them back into your briefcase.  \n\t“The maid will show you to your room.  I understand you do not wish to be involved with my family or this house, but I must warn you anyway.  Do not leave your bedroom, under any circumstances.  No matter what you may see or hear, it is not safe for you outside that door.  I hope to see you in the morning.”\n\tBefore you can decide whether or not to ask her what she means by “not safe” she leaves the parlor, and through the open door you see the maid hovering in the darkness of the front hall.  You take your briefcase and walk to the door.\n\t“Follow me please, sir,” the maid says, and leads you further into the house to a wide wooden staircase.  The stairs creak under you, although ahead of you the maid’s footsteps are silent.  She takes you down a long hallway and opens the door to a plain room with a four-poster bed in the center.\n\n Continue?\na.  Yes\n\nb.  No";

par_4->achoice = 0;
par_4->bchoice = 0;
par_4->text = "\t“I’m sorry for all of this, truly I am,” Elizabeth Blackwood says.  \n\t“Over one hundred years ago my great-grandmother Mariah Blackwood went mad here, in this house,” she says.  “It’s not a very pleasant story, but it's one I think you need to know.  I’ve heard that she wasn’t quite right during her third pregnancy, and by the time she gave birth to the little boy her mind was already beginning to unravel.  Although her husband tried to help her, it only got worse as time went on.  Shortly after that boy turned five, something happened to push Mariah over the edge.  She killed her youngest child, and then herself.”\n\tElizabeth Blackwood pauses, but you’re too busy trying to absorb all that she’s said to say anything, so she keeps going.\n\t“Since then my family has been doubly cursed, you see.  First with madness that runs in the female line.  I have not had it myself, but I watched it take my mother.  The second is the ghost of that boy—I have not seen him myself, only heard him, but I know that he is an omen.  Bad things happen to those who see him.  Of that I am certain.”\n\nChoice:\na.  You shift uncomfortably in your seat.  “I’ll defer to you then, I suppose,” you say.\n\nb.  “I’m sorry for your family tragedies, but I’d like to stay out of it as much as possible,” you say.";
par_4->isimpact = true;


par_5->achoice = 2;
par_5->bchoice = 3;
par_5->text = "\tYou follow the maid back to the parlor.  There’s an older woman there now, pacing back and forth in front of the fire.   She looks to be in her late 40s, her blond hair gone gray at the temples is swept back in a neat bun.  \t“Leave us,” the woman snaps at the maid.  The maid slips back out without another word.\t“Ms Blackwood?” you ask.  She seems agitated.\t“I am Elizabeth Blackwood.  Tell me, where did you go?” she asks, and the intensity of her gaze makes you uncomfortable.\t“I apologize if I’ve overstepped,” you say.  “I heard a child crying, and when no one came I went out to—“\t“Did you see the child?” she interrupts.\t“I beg your pardon?”\t“Did you see the child?” she asks.\t“Yes, in the playroom across the hall,” you say, confused at her attitude.\tElizabeth Blackwood’s face goes pale and she sits heavily on the settee.\t“You must leave here, at once,” she says.  “You cannot stay in this house.”\t“What?  Why?” you ask, upset.  \t“If you have seen the child, you must go,” she says, and suddenly she sounds tired.  You frown at her, and a part of you wants to call out her rudeness.  You’ve traveled hours to come here and at her request, and now she wants to kick you out in the middle of the night in the middle of nowhere.  \tAnother part of you is distracted by the fact that your hand still feels unnaturally cold from when the child touched it.\n\nChoice:\na.  “I’m not leaving,” you say.  “I’ve come a very long way, and none of this makes sense, Ms Blackwood.  I apologize if I’ve upset you, but you cannot expect me to simply leave in the middle of the night with no transportation.  If anything, I think you owe me an explanation.”\n\nb.  You’ve had enough of this strange house and the strange people in it.  Your run-in with the little boy has only added to your feeling of unease, and you find you cannot wait to get out of here.\n\t“Fine,” you say.  “I’ll leave right now.”";

par_6->achoice = 0;
par_6->bchoice = 9;
par_6->text = "\tYou stare at her for a long moment, wondering if she’s playing some kind of joke.  When she doesn’t speak or laugh, you let sigh.\n\t“Is this why you’re selling the farm?” you ask finally.\n\t“Yes.  I’ve watched this curse tear generations of my family apart, and I want to end it.  I don’t know what will happen, if the curse will follow me or afflict whomever buys the property, but at this point I don’t much care.  I’m simply tired of it all,” she says.\n\t“I see,” you say.  You’re not sure whether or not you believe her, but you can’t ignore the fact that something about the house itself feels…malicious, as if it’s watching you.  You realize you want to get out of here as soon as you can.\n\t“Shall we proceed with the paperwork, then?” you ask, reaching for your briefcase.  \n\t“Of course,” she agrees.  You pass the estate sale papers to her, and explain over her shoulder what each document is and where she must sign.  As she signs each one, you think about the strange story she told you.  Perhaps her family is cursed, or perhaps it was just an awful tragedy that still resonates, generations later.  \n\tWhen she is finished, she hands the stack back to you and stands while you slip them back into your briefcase.  \n\t“The maid will show you to your room.  I understand you may already think me crazy, but I must warn you anyway.  Do not leave your bedroom, under any circumstances.  No matter what you may see or hear, it is not safe for you outside that door.  I hope to see you in the morning.”\n\tBefore you can ask her to explain further, she leaves the parlor, and through the open door you see the maid hovering in the darkness of the front hall.  You take your briefcase and walk to the door.\n\t“Follow me please, sir,” the maid says, and leads you further into the house to a wide wooden staircase.  The stairs creak under you, although ahead of you the maid’s footsteps are silent.  She takes you down a long hallway and opens the door to a plain room with a four-poster bed in the center.  \n\nContinue?\na.  Yes\n\nb. No";

bed_leave->text = "\tYou’re certain now that you’ll never be able to fall asleep.  The house creaks and groans around you, almost like a living thing.  Your dreams are uneasy, in them your bedroom door swings open and the maid comes to stand at your bedside, holding the hand of a little boy with curly black hair and hollow eyes.  You dream about a straight razor lying next to a white enamel bowl filled with water, about a wooden treehouse blown away during a tornado, and the maid and the boy again.\n\tAt least dawn leaks over the horizon and your bedroom fills with weak gray light.  Finally you’re able to rouse yourself from the uneasy sleep—all around you the house is silent.  You dress as fast as you can, taking up your briefcase and hurrying down the stairs.  Your footsteps seem impossibly loud on the creaking staircase, but nothing else stirs.  Finally you reach the front door and throw it open, hurrying down the steps.  You don’t care if you have to walk the six miles back to town, you just need to leave.\n\tWhen you finally cross the Blackwood property line at the road you take a deep breath, feeling as if a weight has been lifted.  Around you, birds are starting to sing their morning songs and the light turns from gray to gold.  You glance back at the farmhouse behind you; it looms dark and foreboding still.  Now that you are away from it you’re certain it’s a cursed place, and for a moment you feel guilty for leaving.  You know there must be more to the story, and think that perhaps if you’d stayed you might have been able to help Elizabeth Blackwood.  \n\tThen you turn and start off down the road—after all, it’s really none of your business. \n";

bed_1->achoice = 1;
bed_1->bchoice = 2;
bed_1->text = "\t“The maid will show you to your room.  I understand you may already think me crazy, but I must warn you anyway.  Do not leave your bedroom, under any circumstances.  No matter what you may see or hear, it is not safe for you outside that door.  I hope to see you in the morning.”\n\tBefore you can ask her to explain further, she leaves the parlor, and through the open door you see the maid hovering in the darkness of the front hall.  You take your briefcase and walk to the door.\n\t“Follow me please, sir,” the maid says, and leads you further into the house to a wide wooden staircase.  The stairs creak under you, although ahead of you the maid’s footsteps are silent.  She takes you down a long hallway and opens the door to a plain room with a four-poster bed in the center.	\tYou set your briefcase on the bed.  The maid lingers in the doorway.\n\t“Is there something else?” you ask, turning to her.  She clasps her hands together and glances up at you, shy.\n\t“I heard her say you were coming from Kansas City,” she says finally.\n\t“That’s right,” you say.\n\t“Is it—is it a nice place? Kansas City?” she asks.\n\t“Well, it’s very different from here,” you say, surprised.  “Parts of it are nice, most of it, probably.”\n\t“I’ve never traveled before,” she says.  \n\t“You’ve never left Salem?” you ask.\n\t“I’ve never even left Blackwood Farm.  I’ve always wanted to, though.  When I was little I used to dream about moving to Kansas City,” she says, ducking her head.\n\tYou smile in spite of yourself.  She’s young and pretty and she seems sweet—you could see her making a place for herself in the city.  It’s a shame she’s stuck in a place like this.\n\t“Well, if you ever make it out there you should look me up,” you say, reaching in to your pocket for one of your business cards.  “That way you’ll have one friend in the city, at least.”\n\tThe maid blinks, then hurries forward to take the card.\n\t“Thank you!” she blurts, then rushes out and back down the hallway, leaving you chuckling behind her.\n\tYou ready yourself for bed, wondering if you’ll get any sleep.  You must have drifted off at some point, though, because you wake suddenly to the sound of breaking glass.  You sit up and realize your bedroom door is ajar, although you’re certain you closed it before.  You see a dim halo of light coming from just outside your bedroom, but by the time you make it to the door it’s moved off down the other end of the hall and you can’t see who’s carrying it.\n\nChoice:\na.  You frown, remembering what Elizabeth Blackwood told you.  You’ve seen enough to know there’s something in this house that isn’t quite normal, and you’d rather keep your head down and just get through the night.  You close your door and hurry back to your bed.\n\nb.  You watch the light disappear around the corner.  There’s something more to the story that Elizabeth Blackwood told you, and to the diary you found in the library.  You have the feeling that if you follow the light, you might get to the bottom of what’s happening.  Taking a deep breath, you step out into the hall.";
 
jattic_1->achoice = 0;
jattic_1->bchoice = 9;
jattic_1->text = "\tYou follow the light down the hall to a dark, narrow staircase leading up to the attic.  You climb the stairs, your heartbeat sounding in your ears.  Although you’re certain this is where you followed the light, there’s no one else here.  The attic is filled with old crates and broken furniture.  At the far end there’s a little table with a kerosene lamp burning on it.  You walk up to it, and see that on the table beside the lamp is the other half of the diary you’d started reading in the library.  You bend toward the table, to better read the cramped cursive handwriting.\n\tJacob Blackwood writes that after his wife Mariah finally gave birth to their third child, a son, she hasn’t been right in the head.  She spends long hours in her room, staring at the wall, and she must be reminded to feed the babe.  When she’s not quiet, she’s crying over nothing in particular, he writes.\n\n\t“January, 1838\n\tThe boy is over a year old now, and still Mariah weeps or stares at the walls.  I thought she was too much before, but now she’s driving me mad.  Sometimes she seems to forget the baby entirely, and other times  she’s hysterical until she can hold him in her arms.  I can’t go on like this, I was already at my wits’ end with the woman, but I confess it’s given me an idea.” \n\nContinue?\na.  Yes\n\nb. No";

jattic_2->achoice = 0;
jattic_2->bchoice = 9;
jattic_2->text = "\tYou frown, and keep reading.\n\n\t“August, 1841\n\tThings are progressing well, I dare say it was the right choice to take it slowly.  When Mariah has one of her fits asking for the boy, I tell his sister to hide him in the nursery and not to let him out until I say so.  Although we can all hear him crying, I’ve told the older two children to ignore it—they know by now to do as I say without asking questions.  Mariah tears through the house, asking for the boy, until she breaks down.  She’s beginning to think she’s truly mad, imagining her youngest child.  When she’s in one of her despondent states I tell the boy to go and sit with her and keep her company.  Perhaps it’s a bit cruel, but she hadn’t been so impossible it wouldn’t have come to this.  If her father wasn’t so stubborn, too—he loves his daughter too much.  He won’t accept anything less than stark raving mad if I’m to convince him she needs an asylum.  Still, I dream of the day she’s gone and I have the farm and my freedom.”\n\tYou have a sour feeling in the pit of your stomach as you read Jacob Blackwood’s diary entries—you have a bad feeling that you know where this is going, based off the story that Elizabeth Blackwood told you earlier.  Nevertheless, you keep reading.\n\n\t“February, 1842\n\ttMariah went well and truly mad today, perhaps I pushed her too far.  It is so awful I can hardly think of it, let alone write of it.  She had one of her fits, but like I’ve never seen before.  I should have sent her to the asylum a year ago, her father’s wishes be damned.  She was pacing the house, all of us could hear the boy crying for his mama, and then she started scratching at her skin and tearing her hair out.  The older two children were frightened by it, I think, so I sent them out to the barn to do chores—I only turned my back for a moment.  When I came back in the door to the nursery was open, and the house was quiet.  When I walked in—the sight of it—I don’t know where she got the straight razor, it wasn’t even mine.  There was blood everywhere.  She’d left the boy there and gone up to the attic.  I didn’t search her out right away, I had a good enough idea of what I’d find.\n  \tStill, in a very dark corner of my heart I confess that this is perhaps for the best.  Mariah is gone, at long last, and no one can blame me for it because no one knows what I have done.  The older children will say nothing, I’m sure of it.  It is sad what happened to the boy, but he was always weak and weeping.  No doubt he wasn’t long for this world anyway.”\n\n\tThere’s only one journal entry left, it’s only a few short sentences.\n\nContinue?\na.  Yes\n\nb. No";

jattic_3->achoice = 0;
jattic_3->bchoice = 0;
jattic_3->text = "\tYou take a deep breath, wanting to get it over with.  \n\n\t“October, 1845\n\tThings were peaceful, for a while, after Mariah and the boy left us.  But the last few months something has been different, our daughter has been behaving strangely.  I catch her staring at the walls, as her mother used to do, or hear her in another part of the house talking to someone that isn’t there.  At night, we hear things—footsteps in the attic, the sound of a child crying.  If I hadn’t buried him myself, I would swear it’s the boy we hear.  I don’t know what’s happening, but I must keep an eye on my daughter.  For some reason, all of this seems tied to her.”\n\n\tYou step back, feeling cold.  You wonder if Elizabeth Blackwood has read this diary, or anyone else in her family--what happened seems too awful to comprehend.  How could someone do that to his own wife, you wonder,  the mother of his children?\n\tAt the thought of Elizabeth Blackwood your heart skips a beat.  She’d said she wasn’t mad the way the rest of her family was, but how could she be certain?  The diary said the crying was tied to the madness, and you’d heard it yourself. \n\tYou realize that it’s getting harder to breathe.  The strangeness of the house feels concentrated now, a malicious presence behind you.  All at once you smell a woman’s perfume, and hear the swinging creak of the attic roof beam.  \n\nChoice:\na.  You squeeze your eyes shut, unwilling to turn around and see the horror that is behind you.  Perhaps if you can just stay here, with your eyes closed, until morning you might make it out alive.\n\nb.  You brace yourself.  You’ve already read such awful things, and now you owe it to Mariah to bear witness to her death.  You close your eyes and slowly turn around.";

jattic_4->achoice = 0;
jattic_4->bchoice = 0;
jattic_4->text = "\tBefore you open your eyes again someone calls you from the top of the attic stairs.\n\t“Sir?”\n\tYou whirl around to see the maid standing there, holding her own lamp.\n\t“Are you alright?  I thought I heard something up here,” she says.\n\tIt takes you several attempts at speaking before sound comes out.\n\t“I’m not sure,” you say.  “I thought I saw—or heard—I don’t know.”\n\t“Would you like to go back to your room?” the maid asks, hesitant, and you nod.  You hurry back across the dark attic, not daring to take your eyes from the maid.  Part of you wonder if she’s even real.  She smiles when you reach her, then leads the way back down the stairs and to your room.\n\t“There you are.  Best to stay put,” she says.\n\t“Yes,” you say, your head spinning with everything you’ve learned.  She turns to go, and before you’re even aware of what you’re doing you reach out to grab hold of her shoulder.\n\t“Do you want to leave here with me?  At first light?  I can take you to Kansas City,” you say, the words coming out rushed.\n\t“I…really?” she looks up at you, surprised.\n\t“Yes.  I can get you out of this house.  You shouldn’t stay here,” you say.\n\t“Alright,” she says, hesitant at first, and then she smiles.  “Yes, I want to leave here with you.”\n\t“First light,” you say.  “I can’t stay here a minute longer.”\n\t“I’ll meet you in the front hall,” she says, excited now.\n\nChoice:\na.  “Fine,” you say.  “Don’t be late, I won’t wait for you.”\nb.  “I’ll see you then.  Pack light,” you smile at her.";

maid_esc->text = "\tTrue to her word, the maid is waiting in the front hall as dawn creeps over the horizon, a small suitcase clutched in her hands.  You nod at her, raising a finger to your lips, and open the front door.  The two of you sneak out into the early morning light.  You feel exhausted, too afraid to sleep after you returned your room, but as you make it to the road you feel lighter.  The maid is laughing, skipping ahead of you, and already it feels as if the past night was some strange dream, that perhaps you’d imagined it.\n\tA farmer in a truck drives past you, then slows down to offer the two of you a ride into town.  You accept, climbing in to the back with the maid without telling him where you were coming from.  You realize he thinks you’re a young couple.  As the truck starts up again, you realize with a start that you don’t even know the maid’s name.  You turn to ask her, and find her staring at the corn whizzing past.  \n\tYou follow her gaze, and your heart stops.  You see a child with dark curly hair darting through the cornfield.  He keeps pace with the truck, moving faster than any man—let alone child—ought.  You start to feel cold all over, and as the truck takes the two of you further away from Blackwood Farm with the strange child running after it, you begin to think that perhaps you missed something very important back at the house, but it’s too late to turn back now.\n";

bed_2->achoice = 3;
bed_2->bchoice = 1;
bed_2->text = "\tYou stare at her for a long moment, wondering if she’s playing some kind of joke.  When she doesn’t speak or laugh, you let sigh.  You can’t quite believe the child—who spoke with you and touched you—is an omen of death, but you don’t want to argue.\n\t“I see,” you say.  You’re not sure what to say next, and a part of you can’t ignore the fact that something about the house itself feels…malicious, as if it’s watching you.  You realize you just want to get out of here as soon as you can.\n\t”The maid will show you to your room,” Elizabeth Blackwood says, turning to stare into the fireplace.   “We can discuss everything in the morning.  I understand you may already think me crazy, but I must warn you anyway.  Do not leave your bedroom, under any circumstances.  No matter what you may see or hear, it is not safe for you outside that door.”\n\tBefore you can ask her to explain further, she leaves the parlor, and through the open door you see the maid hovering in the darkness of the front hall.  You take your briefcase and walk to the door.\n\t“Follow me please, sir,” the maid says, and leads you further into the house to a wide wooden staircase.  The stairs creak under you, although ahead of you the maid’s footsteps are silent.  She takes you down a long hallway and opens the door to a plain room with a four-poster bed in the center.\n\tYou ready yourself for bed, wondering if you’ll get any sleep.  You must have drifted off at some point, though, because you wake suddenly to see the boy with hollow eyes standing next to your bed.  You freeze, and he speaks.\n\t”Will you help me find my mama?  I don’t know where she went,” he says, his voice trembling.\n\tElizabeth Blackwood’s words ring out in your mind, Bad things happen to those who see him.  When you try to speak, no sound comes out and the boy continues to stare at you.  Finally you find your voice.\n\nChoices:\na.  “Alright, I’ll help you,” you say.  Now is your chance to get some answers, and you’ve never met a real ghost before.  \n\nb.  “I can’t, go away!  I have to get out of here!” your tone is panicked as you throw off the quilts and rush past the boy.  You pick up your briefcase and then you’re running through the hall and down the stairs.";

cattic_1->achoice = 0;
cattic_1->bchoice = 0;
cattic_1->text = "\tYou stand, and the boy slips his hand into yours.  Again, it’s cold, but you don’t feel any malice in his touch.  Instead, he seems almost like a normal child seeking comfort from the closest adult.  He leads you out of your room and down the hall to a dark, narrow staircase.  When you hesitate at the bottom, he tugs on your hand.\n\t“We have to find Mama,” he says.  You let him lead you up to the attic.\n\tYou climb the stairs, your heartbeat sounding in your ears.  The attic is filled with old crates and broken furniture.  At the far end there’s a little table with a kerosene lamp burning on it.  A movement in the shadows to your right startles you, and you realize you’re not alone as the maid steps out into the small halo of light from the kerosene lamp.  She’s wearing an old-fashioned dress dress overlaid with black lace and holding a small hatchet.\n\t“Jacob?  Is that you?” the maid asks.\n\tYou take a step back, and the boy squeezes your hand.  \t“Jacob is my papa,” he says.\n\tThe maid’s expression turns strange at the boy’s words.\n\nChoices:\na.  “I need to leave now,” you say, unable to take your eyes off of the maid.\n\nb.  “I think there’s been some kind of misunderstanding,” you say, holding your hands out in a way that you hope seems non-threatening.";

cattic_2->achoice =0;
cattic_2->bchoice = 9;
cattic_2->text = "\t“It’s okay,” the little boy says.  “See?” \n\tHe points to something leaning against the wall, and you risk taking your eyes off the maid to examine it.  It’s a large oil portrait of a family, and even in the darkness you realize this must be Jacob and Mariah Blackwood surrounded by their children.  The youngest is a spitting image of the boy at your side, but a chill runs down your spine when you see that Mariah Blackwood bears a startling resemblance to the maid—neither Jacob nor Mariah bear any similarities to the woman who had introduced herself as Elizabeth Blackwood.\n\t“You did a very bad thing, Jacob,” the maid says, taking a step towards you.\n\t“I’m not Jacob,” you say.  You take a step back and speak slowly in hopes that she’ll snap out of whatever state she’s in.  “I’m the estate agent.”\n\t“Papa hurt Mama,” the little boy says, his strange eyes trained on the maid.\n\t“What do you mean?” you ask, dread crawling over every inch of your skin.  Nothing in Elizabeth Blackwood’s tale had mentioned Jacob hurting Mariah.\n\t“That was before,” the little boy says.  “A long time ago.”\n\tYou take another step back away from the maid and her hatchet, afraid now.  You should have stayed in your room, you think.  You’re debating trying to make a run for it, only you don’t want to turn your back on the maid just yet.  Then you hear the sound of footsteps pounding up the attic staircase.\n\nContinue?\na.  Yes\n\nb.  No";

cattic_3->achoice = 0;
cattic_3->bchoice = 0;
cattic_3->text = "\tYou turn and see Elizabeth Blackwood standing at the top of the stairs, breathing hard with her formerly neat hair hanging unkempt down her back.  She focuses completely on the maid, ignoring you.\n\t“Lizzie, what are you doing?” she speaks slowly.  The maid frowns at her.\n\t“Who are you?” the maid asks.\n\t“It’s me, Susan.  You know me, Elizabeth, I nursed you as a little girl,” the woman says.\n\t“What’s going on here?” you ask.\n\t“Lizzie, put that down,” the older woman says.  The maid hesitates, then lowers the hatchet, but does not let it go.\n\t“I’m sorry, sir.  I was hoping you wouldn’t have to see this,” the woman says to you.\n\t“Who are you?” you ask, although you think you’re starting to figure it out.\n\t“My name is Susan Ellis.  I came to Blackwood Farm when Elizabeth—Lizzie—was born, first as her nurse, and then as her caretaker after her parents died.  Things were alright, for a while, and I thought that maybe all this curse nonsense was just that—nonsense.  Then she turned eighteen, and we started hearing the child crying.  Lizzie started behaving oddly, forgetting things and thinking she was someone else.” The woman, Susan, hesitates.  She stares at the maid with an expression of obvious love, and sadness.\n\t“I thought maybe if I could get her out of here things would get better.  Sell the house, and start over somewhere new.  I tried to convince her, but it was like she couldn’t hear me whenever I brought it up.  She’d talk about leaving, sometimes, but whenever I mentioned selling the farm it was like she just shut down.”\n\t“How did you get her to agree to this?” you ask, gesturing to yourself.  “To pretend to be a maid in her own house?”\n\tSusan shrugs, looking apologetic.\n\t“I told her that it might be fun, for a little bit.  That she would get to meet a man outside of her own family if she agreed.”\n\t“That was why you wanted me to come all the way out here,” you say, understanding sinking in.  “And then when I saw the boy—“ you stop as you realize the little boy has disappeared again.\n\t“I’m so sorry,”\n is all Susan will say.\n\nChoices:\na.  “What happened between Jacob and Mariah?” you ask, thinking to solve the rest of the mystery.\n\nb.  “She thinks I’m Jacob Blackwood, I think,” you tell Susan, hoping she can talk Lizzie down.";

attic_end->text = "\tThe maid—Lizzie, you think to yourself—stamps her foot, and shrieks as soon as you say Jacob’s name.\n\t“You did a very bad thing, Jacob!” she says.\n\t“He’s not Jacob, love, you’re confused again,” Susan says, trying to soothe her.\n\t“You’re the one that started all of this!  It’s your fault my child is dead, you know.  Your fault that it came to this.  This isn’t what I wanted!” Lizzie holds the hatchet tight against her chest.\n\t“It’s happening again,” Susan whispers, her eyes going wide.\n\t“What do you mean?” you ask, starting to feel desperate.\n\t“This—I’ve seen before—when Lizzie’s mother—“ she breaks off.\n\t“When her mother WHAT?” you nearly shout.  Behind you, you hear the sound of the boy crying again.\n\t“What is it, darling?  Where are you?  Mama’s here.  Where are you, sweet boy?  I know you’re here somewhere!” Lizzie takes several stumbling steps toward you as she stares blindly around the attic.\n\t“I’m so sorry,” Susan says, and it takes you a moment to realize she’s speaking to you and not to Lizzie.\n\t“I’ll tell your employers there was an accident,” she says, and the meaning behind her words takes a moment to sink in.\n\t“What have you done with my boy?!”  Lizzie lunges toward you.\n\tYou turn to run, and you stumble over an old steamer trunk you hadn’t realized was just behind you.  You push yourself back to your feet, your attention wholly focused on the shadow of the attic staircase, but you’re too slow to beat the swing of the hatchet, and everything goes dark.";


//setting up game


storyGraph->clearCurrent ();
storyGraph->setSource(intro);
cout << "-------------------------------------------\n*******************************************\n-------------------------------------------\n\n A Night at Blackwood Farm\n\nJanet Derrico\nCSPB 2270, Summer 2021\nFinal Project\n-------------------------------------------\n*******************************************\n-------------------------------------------\n" << endl;
storyGraph->playGame (storyGraph->getCurrent());



return 0;
}

